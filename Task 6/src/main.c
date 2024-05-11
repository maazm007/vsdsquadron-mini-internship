// Full Adder Implementation

// Included the requried header files
#include<stdio.h>
#include<debug.h>
#include<ch32v00x.h>

// Defining the Logic Gate Function 
int and(int bit1, int bit2)
{
    int out = bit1 & bit2;
    return out;
}
int or(int bit1, int bit2)
{
    int out = bit1 | bit2;
    return out;
}
int xor(int bit1, int bit2)
{
    int out = bit1 ^ bit2;
    return out;
}

// Configuring GPIO Pins
void GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure = {0}; // structure variable used for GPIO configuration
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE); // to enable the clock for port D
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE); // to enable the clock for port D
    
    // Input Pins Configuration
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; // Defined as Input Type
    GPIO_Init(GPIOD, &GPIO_InitStructure);

    //Output Pins Configuration
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; // Defined Output Type
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // Defined Speed
    GPIO_Init(GPIOC, &GPIO_InitStructure);
}

// The MAIN function responsible for the execution of program
int main()
{
    uint8_t A, B, Cin, Sum, Carry; // Declared the required variables
    uint8_t p, q, r, s, t; 
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    SystemCoreClockUpdate();
    Delay_Init();
    GPIO_Config();

    while(1)
    {
        A = GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_1);
        B = GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_2);
        Cin = GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_3);
        s = xor(A, B);
        Sum = xor(Cin, s);
        p = and(A, B);
        q = and(B, Cin);
        r = and(Cin, A);
        t = or(p, q);
        Carry = or(r, t);

        /* SUM */
        if(Sum == 0)
        {
            GPIO_WriteBit(GPIOC, GPIO_Pin_4, SET);
        }
        else
        {
            GPIO_WriteBit(GPIOC, GPIO_Pin_4, RESET);
        }

        /* CARRY */
        if(Carry == 0)
        {
            GPIO_WriteBit(GPIOC, GPIO_Pin_5, SET);
        }
        else
        {
            GPIO_WriteBit(GPIOC, GPIO_Pin_5, RESET);
        }
    }
}


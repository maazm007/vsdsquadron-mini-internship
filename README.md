#  VSDSquadron Reseacrh Internship 2024

The program is based on the RISC-V architecture and uses open-source tools to teach people about VLSI chip design and RISC-V. The instructor for this internship is Kunal Ghosh Sir.

##  Basic Details

**Name:** Maaz Mahmood Siddique  
**College:** KIET Group of Institutions  
**Email ID:** maazms999@gmail.com  
**GitHub Profile:** [maazm007](https://github.com/maazm007?tab=repositories)  
**LinkedIN Profile:** [maazm-ece-vlsi](https://www.linkedin.com/in/maazms-ece-vlsi/)

----------------------------------------------------------------------------------------------------------------

<details>
<summary><b>Task 1:</b> Task is to install all the essential tools required for this internship such as Ubuntu on VMBox, GNU Toolchain, GTKWave, Yosys and iVerilog simulator</summary>   
<br>

**1. Install Ubuntu 20.04 LTS on Oracle Virtual Machine Box**

![Ubuntu and VMBox Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/11c35aff-f587-40f5-a7d2-683dbf0784d4)

**2. Install RISC-V [GNU ToolChain](https://github.com/riscv-collab/riscv-gnu-toolchain)**

### What is RISC-V GNU Toolchain?
> The RISC-V GNU Compiler Toolchain is a free and open source cross-compiler for C and C++. It supports two build modes: Generic ELF/Newlib and Linux-ELF/glibc. The toolchain can be used to create assembly instructions and sequences for execution in a simulator and target FPGA  

*Use the following command to install GNU Toolchain*
```  
$ sudo apt install git  
$ git clone https://github.com/riscv/riscv-gnu-toolchain
$ sudo apt-get install autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev libslirp-dev  
$ mkdir /opt/riscv
$ ./configure --prefix=/opt/riscv --with-arch=rv64i --with-abi=lp64 --enable-multilib
$ sudo make
```
Now add ```/opt/riscv/bin``` to **PATH**  
```
$ gedit ~/.bashrc  
````  
Add the line ```export PATH="$PATH:/opt/riscv/bin"``` in the end of file and save it. After that run the following command:  
```
$ source ~/.bashrc
```

![RISC-V GNU Toolchain Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/2ca2294c-28f5-43dd-bf9d-41abf33c9d02)

**3. Install ```Yosys Open SYnthesis Suite```**

### What is Yosys?
> Yosys, or Yosys Open SYnthesis Suite, is a free, open-source framework for Verilog RTL synthesis. It can be used to process almost any synthesizable Verilog-2005 design, and to convert Verilog to BLIF, EDIF, BTOR, SMT-LIB, and more. Yosys can be customized to perform any synthesis job by combining the existing passes (algorithms) using synthesis scripts and adding additional passes as needed by extending the yosys C++ code base  
  
*Use the following command to install Yosys*
```  
$ git clone https://github.com/YosysHQ/yosys.git
$ cd yosys
$ sudo apt install make //If make is not installed, make sure to install it first
$ sudo apt-get install build-essential clang bison flex \
	libreadline-dev gawk tcl-dev libffi-dev git \
	graphviz xdot pkg-config python3 libboost-system-dev \
	libboost-python-dev libboost-filesystem-dev zlib1g-dev
$ make config-gcc
$ make 
$ sudo make install  
```

![Yosys Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/a6c0eddb-fad4-4cd2-8bf6-7f4bc2b20b22)

**4. Install ```GTKwave``` waveform viewer**

### What is GTKWave?
> GTKWave is a free, lightweight waveform viewer that's used to display simulation output. It's based on the GTK library and supports VCD and LXT formats for signal dumps. A waveform viewer that allows for the visualization of simulation outputs, facilitating the analysis of digital signals.  

*Use the following command to install GTKWave*  
```  
$ sudo apt update
$ sudo apt install gtkwave  
```

![gtkwave Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/11156322-7ae3-4cea-9e09-b7952764df28)

**5. Install ```Icarus Verilog``` open source tool for simulation**

### What is iverilog?  
> Icarus Verilog is a compiler for the Verilog hardware description language (HDL). It's used to collect Verilog source code, check for errors, and write compiled design files. It also helps access source files in libraries, link modules, and write compiled results  

*Use the following command to install Icarus Verilog*
```  
$ sudo apt-get install iverilog
```

![iverilog Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/0c3be648-2f4f-48d3-bb53-45bfc56ba9b2)
</details>

------------------------------------------------------------------------------------------------------------------

<details>
<summary><b>Task 2:</b> Task is to identify instruction type of all the given instructions with its exact 32 bits instruction code in the desired instruction type format</summary>
<br>

### WHAT IS RISC-V?
* RISC-V is an open-source instruction set architecture (ISA) that allows developers to develop processors for specific applications.  
* RISC-V is based on reduced instruction set computer principles and is the fifth generation of processors built on this concept.  
* RISC-V can also be understood as an alternative processor technology which is free and open, meaning that it does not require you to purchase the license of RISC-V to use it.  

### INSTRUCTIONS FORMAT IN RISC-V  
The instructions format of a processor is the way in which machine language instructions are structured and organized for a processor to execute. It is made up of series of 0s and 1s, each containing information about the location and operation of data.  
There are 6 instruction formats in RISC-V:  
1. R-format  
2. I-format  
3. S-format  
4. B-format  
5. U-format  
6. J-format  

![RISCV Instruction Types](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/f8e6fd22-79c5-4f6c-b59f-2b38fdb62c0e)

Let’s discuss each of the instruction formats in detail with examples.  

### 1. R-type Instruction  
In RV32, each instruction is of size 32 bits. In R-type instruction, R stands for register which means that operations are carried on the Registers and not on memory location. This instruction type is used to execute various arithmetic and logical operations. The entire 32 bits instruction is divided into 6 fields as shown below.  
  
 ![R-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/4a17f03e-ae74-4809-a8d9-79924fb8b421)
 
* The first field in the instruction format is known as **opcode**, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* The next subfield is known as **rd** field which is referred as Destination Register. The rd field is of length 5 bits and is used to store the final result of operation. 
* The next subfield is **func3** also referred as function 3. Here the ‘3’ represents the size of this field. This field tells the detail about the operation, i.e., the type of arithmetic and logical that is performed.  
* The next two subfields are the source registers, **rs1 and rs2** each of length 5 bits. These are mainly used to store and manipulate the data during the execution of instructions.  
* The last subfield is **func7** also referred as function 7. Here ‘7’ represents the size of the field. The function of func7 field is same as that of func3 field.  
  
### 2. I-type Instruction  
In RV32, each instruction is of size 32 bits. In I-type instruction, I stand for immediate which means that operations use Registers and Immediate value for their execution and are not related with memory location. This instruction type is used in immediate and load operations. The entire 32 bits instruction is divided into 5 fields as shown below.  
  
![I-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/4a53f5fa-d55a-4308-8f93-a0f2f3aedba0)
   
* The first field in the instruction format is known as **opcode**, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* The next subfield is known as **rd** field which is referred as Destination Register. The rd field is of length 5 bits and is used to store the final result of operation.  
* The next subfield is **func3** also referred as function 3. Here the ‘3’ represents the size of this field. This field tells the detail about the operation, i.e., the type of arithmetic and logical that is performed.  
* The next subfield is the source registers, **rs1** of length 5 bits. It is mainly used to store and manipulate the data during the execution of instructions.  
* The only difference between R-type and I-type is **rs2 and func7** field of R-type has been replaced by 12-bits signed immediate, **imm[11:0]**.  
  
### 3. S-type Instruction  
In RV32, each instruction is of size 32 bits. In S-type instruction, S stand for store which means it is store type instruction that helps to store the value of register into the memory. Mainly, this instruction type is used for store operations. The entire 32 bits instruction is divided into 6 fields as shown below.  
  
![s-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/fc9ddedc-4c99-4b6f-9765-c2e8c8e29302)
    
* The first field in the instruction format is known as **opcode**, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* S-type instructions encode a 12-bit signed immediate, with the top seven bits **imm[11:5] in bits [31:25]** of the instruction and the lower five bits **imm[4:0] in bits [11:7]** of the instruction.  
* S-type instruction doesn’t have rd fields which states that these instructions are not used to write value to a register, but to write/store a value to a memory.  
* The value to be stored is defined in **rs1** field and address to which we have to store this value is calculated using **rs1 and immediate** field. The width of the operation and types of instruction is defined by **func3**, it can be a word, half-word or byte.  
  
### 4. B-type Instruction  
In RV32, each instruction is of size 32 bits. In B-type instruction, B stand for branching which means it is mainly used for branching based on certain conditions. The entire 32 bits instruction is divided into 8 fields as shown below.  
  
![B-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/14486f41-f3e4-4c4a-85b0-9acc56be3f46)
   
* The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* B-type instructions encode a 12-bit signed immediate, with the most significant bit **imm[12] in bit [31]** of the instruction, six bits **imm[10:5] in bits [25:30]** of the instruction, four bits **imm[4:1] in bits [11:8]** and one bit **imm[11] on bit[7]**.  
* There are two source registers **rs1 and rs2** on which various operations are performed based on certain conditions, and those conditions are defined by **func3** field.  
* After performing operations on the source register based on the conditions, it is evaluated that if the condition is true, Program Counter value gets updated by ```PC = Present PC Value + Immediate Value```, and if the condition is false then PC will be given as ```PC = Present PC value + 4 bytes```, which states that PC will move to next instruction set.  
* RV32 instructions are word-aligned, which means that address is always defined in the multiple of 4 bytes.  
  
### 5. U-type Instruction  
In RV32, each instruction is of size 32 bits. In U-type instruction, U stand for Upper Immediate instructions which means it is simply used to transfer the immediate data into the destination register. The entire 32 bits instruction is divided into 3 fields as shown below.  
  
![u-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/4f3df58b-8c0c-45c6-ba39-a196547dd38f)
   
* The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* The U-type instruction only consists of two instructions, i.e., ```LUI``` and ```AUIPC```.  
* For Example, lets take the instruction **lui rd, imm** and understand this instruction.
```lui x15, 0x13579``` : This instruction will be executed and the immediate value 0x13579 will be written in the MSB of the rd x15, and it will look like x15 = 0x13579000.  
  
### 6. J-type Instruction  
In RV32, each instruction is of size 32 bits. In U-type instruction, J stand for jump, which means that this instruction format is used to implement jump type instruction. The entire 32 bits instruction is divided into 6 fields as shown below.  
  
![j-type](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/5dc9a9be-4048-4a35-a99e-7b4a0075caa0)
  
* The first field in the instruction format is known as **opcode**, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.  
* The J-type instruction only consists of single instruction, ```JAL```.  
* J-type instruction encode 20 bits signed immediate which is divided into four fields.  
* The J-type instructions are often used to perform jump to the desired memory location. The address of the desired memory location is defined in the instruction. These instructions are also used to implement loops.  
  
### *Now, let's analyse each instruction given to us one by one*  
  
```
ADD r6, r2, r1  
```  
> * All the arithmetic and logical operations are performed using R-type instruction format, hence this instruction belongs to R-type instruction set.  
> * r6 is the destination register that will hold the sum of values stored in the register r2 and r1.  
> * Opcode for ADD = 0110011  
> rd = r6 = 00110  
> rs1 = r2 = 00010  
> rs2 = r1 = 00001  
> func3 = 000  
> func7 = 0000000
  
**32 bits instruction :** ```0000000_00001_00010_000_00110_0110011```   

----------------------------------------------
```
SUB r7, r1, r2
```
> * All the arithmetic and logical operations are performed using R-type instruction format, hence this instruction belongs to R-type instruction set.  
> * r7 is the destination register that will hold the difference of values stored in the register r1 and r2.  
> * Opcode for SUB = 0110011  
> rd = r7 = 00111  
> rs1 = r1 = 00001  
> rs2 = r2 = 00010  
> func3 = 000  
> func7 = 0100000  

**32 bits instruction :** ```0100000_00010_00001_000_00111_0110011```  

----------------------------------------------
```
AND r8, r1, r3
```
> * All the arithmetic and logical operations are performed using R-type instruction format, hence this instruction belongs to R-type instruction set.  
> * r8 is the destination register that will hold the value of r1 & r3, means performing AND operation bit by bit.  
> * Opcode for AND = 0110011  
> rd = r8 = 01000  
> rs1 = r1 = 00001  
> rs2 = r3 = 00011  
> func3 = 111  
> func7 = 0000000  

**32 bits instruction :** ```0000000_00011_00001_111_01000_0110011```  

---------------------------------------------
```
OR r9, r2, r5
```
> * All the arithmetic and logical operations are performed using R-type instruction format, hence this instruction belongs to R-type instruction set.  
> * r9 is the destination register that will hold the value of r2 | r5, means performing OR operation bit by bit.  
> * Opcode for OR = 0110011  
> rd = r9 = 01001  
> rs1 = r2 = 00010  
> rs2 = r5 = 00101  
> func3 = 110  
> func7 = 0000000 

**32 bits instruction :** ```0000000_00101_00010_110_01001_0110011```

----------------------------------------------
```
XOR r10, r1, r4
```
> * All the arithmetic and logical operations are performed using R-type instruction format, hence this instruction belongs to R-type instruction set.  
> * r10 is the destination register that will hold the value of r1 ^ r4, means performing XOR operation bit by bit.  
> * Opcode for XOR = 0110011  
> rd = r10 = 01010  
> rs1 = r1 = 00001  
> rs2 = r4 = 00100  
> func3 = 100  
> func7 = 0000000  

**32 bits instruction :** ```0000000_00100_00001_100_01010_0110011```

----------------------------------------------
```
SLT r11, r2, r4
```
> * Since the logical operation is performed on registers, hence this instruction belongs to R-type instruction set.
> * r1 is the destination register that sets to 1, if r2 is less than r4, else 0 if r2 is greater than r4.
> * Opcode for SLT = 0110011  
> rd = r1 = 01011  
> rs1 = r2 = 00010  
> rs2 = r4 = 00100  
> func3 = 010  
> func7 = 0000000  

**32 bits instruction :** ```0000000_00100_00010_010_01011_0110011```

------------------------------------------------
```
ADDI r12, r4, 5
```
> * In this instruction ADD means Addition, I means Immediate, therefore ADDI means Addition with Immediate, hence this instruction belongs to I-type instruction set.  
> * r12 is the destination register that will store the value of r5 sum-up with the immediate value 5.
> * Opcode for ADDI = 0010011  
> rd = r12 = 01100  
> rs1 = r4 = 00100  
> imm[11:0] = 5 = 000000000101  
> func3 = 000  

**32 bits instruction :** ```000000000101_00100_000_01100_0010011```

------------------------------------------------
```
SW r3, r1, 2
```
> * In this instruction SW means store word, hence this instruction belongs to S-type instruction set.  
> * r3 is the source register. This instruction will store the value located in register r3 at the address obtained by adding the immediate address 2 with the address located in register r1.  
> * Opcode for SW = 0100011  
> rs2 = r3 = 00011  
> rs1 = r1 = 00001  
> imm[11:0] = 2 = 000000000010  
> func3 = 010  

**32 bits instruction :** ```0000000_00011_00001_010_00010_0100011```  

-----------------------------------------------
```
SRL r16, r14, r2
```
> * SRL means Logical Shift Right and since the operation is performed on registers, this instruction belongs to S-type instruction set.  
> * r16 is the destination register, in which the value stored in r14 will be written after performing logical right shift based on the number stored in r2.  
> * Opcode for SRL = 0110011  
> rd = r16 = 10000  
> rs1 = r14 = 01110  
> rs2 = r2 = 00010  
> func3 = 101  
> func7 = 0000000  

**32 bits instruction :** ```0000000_00010_01110_101_10000_0110011```  

-----------------------------------------------
```
BNE r0, r1, 20
```
> * BNE is a branching instruction (B-type) based on conditions. Here BNE specifies the condition that the value stored in r0 != (is not equal to) the value stored in r1. If the condition becomes true, Program Counter will be updated by PC + 20, else PC + 4 for next instruction.  
> * Opcode for BNE = 1100011  
> rs1 = r0 = 00000  
> rs2 = r1 = 00001  
> imm[12:1] = 20 = 000000010100  
> func3 = 001  

**32 bits instruction :** ```0_000001_00001_00000_001_0100_0_1100011```  

-------------------------------------------------
```
BEQ r0, r0, 15
```
> * BEQ is a branching instruction (B-type) based on conditions. Here BEQ specifies the condition that the value stored in r0 == (is equal to) the value stored in r0. If the condition becomes true, Program Counter will be updated by PC + 15, else PC + 4 for next instruction.  
> * Opcode for BEQ = 1100011  
> rs1 = r0 = 00000  
> rs2 = r0 = 00000  
> Imm[12:1] = 000000001111  
> func3 = 000  

**32 bits instruction :** ```0_000000_00000_00000_000_1111_0_1100011```

------------------------------------------------  
```
LW r13, r1, 2
```
> * LW stands for Load Word. Word is equal to 32 bits or 4 bytes. Since there is an immediate value given in the instruction which helps to calculate the address of memory from where we have to fetch the data, hence this instruction belongs to I-type.  
> * r13 is the destination register that will hold the value fetched from the memory location calculated by using (address value stored in r1 + immediate value)  
> * Opcode for LW = 0000011  
> rd = r13 = 01101  
> rs1 = r1 = 00001  
> imm[11:0] = 000000000010  
> func3 = 010  
  
**32 bits instruction :** ```000000000010_00001_010_01101_0000011```  

</details>

---------------------------------------------------

<details>
<summary><b>Task 3:</b> Task is to refer to C based and RISCV based lab videos and execute the task of compiling the C code using gcc and riscv compiler</summary>
<br>

### C Language based LAB
We have to follow the given steps to compile any **.c** file in our machine:  
1. Open the bash terminal and locate to the directory where you want to create your file. Then run the following command:

	```
	gedit sum_1ton.c
	```  
2. This will open the editor and allows you to write into the file that you have created. You have to write the C code of printing the sum of n numbers. Once you are done with your code, press ```Ctrl + S``` to save your file, and then press ```Ctrl + W``` to close the editor.   
3. To the C code on your terminal, run the following command:

	```
	gcc sum_1ton.c
	./a.out
	```
![C Code compiled on gcc Compiler](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/8ca03eec-c0cf-4a34-9c4b-2ff791a3b550)

### RISCV based LAB
We have to do the same compilation of our code but this time using RISCV gcc compiler. Follow the given steps:  
1. Open the terminal and run the given command:  

	```
	cat sum_1ton.c
	```
![cat Command](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/a272d8d0-63e5-4f00-9899-2223402be21d)

2. Using the **cat** command, the entire C code will be displayed on the terminal. Now run the following command to compile the code in riscv64 gcc compiler:  

	```
	riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o sum_1ton.o sum_1ton.c
	```
3. Open a new terminal and run the given command:    

	```
	riscv64-unknown-elf-objdump -d sum_1ton.o
	```
![Objdump using -O1 format](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/dbf50220-d897-4b69-b33d-d0201fddb4fb)

4. The Assembly Language code of our C code will be displayed on the terminal. Type ```/main``` to locate the main section of our code.  

### *Descriptions of the keyword used in above command*  
* **-mabi=lp64:** This option specifies the ABI (Application Binary Interface) to use ```lp64```, which is for 64-bit integer, long and pointer size. This ABI is used for 64-bit RISCV architecture.  
* **-march=rv64i:** This option specifies the architecture that we use, which is rv64i, indicates the 64-bit RISCV base integer instruction set. This also confirms the targeting of 64-bit architecture.  
* **riscv-objdump:** A tool for disassembling RISC-V binaries, providing insights into the code structure and helping in debugging.  
* **-Ofast:** The option -Ofast in the command ```riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c``` is a compiler optimization flag used with the GNU Compiler Collection (GCC). This flag is used to instruct the compiler to optimize the generated code for maximum speed. The use of ```-Ofast``` is typically chosen for applications where execution speed is critical and where deviations from standard behavior are acceptable. However, it's important to test thoroughly, as this level of optimization can introduce subtle bugs, especially in complex calculations or when strict compliance with external standards is required.  
* **-O1:** This options is an optimization level that tells the compiler to optimize the generated code but without greatly increasing compilation time. -O1 aims to reduce code size and execution time while keeping the compilation process relatively quick.  

#### *Other common options are as follows:*  
> 1. **-O0:** No optimization, the default level if no -O option is specified.  
> 2. **-O2:** More aggressive optimizations that might increase compilation time but typically provide faster and sometimes smaller code.  
> 3. **-O3:** Maximizes optimization more aggressively than -O2.  
> 4. **-Os:** Optimizes code for size. It enables all -O2 optimizations that do not typically increase code size.

Here, the term **more aggressive optimization** in the context of compilers like GCC refers to a deeper and more complex set of transformations applied to the code in order to improve its performance and possibly reduce its size. The compiler uses more complex techniques that aims to generate faster executing code or code that occupies less memory. However, these optimizations typically increase the compilation time and can sometimes introduce bugs, making it harder to debug.
</details>

-------------------------------------------------

<details>
<summary><b>Task 4:</b> Performing SPIKE Simulation and Debugging the C code with Interactive Debugging Mode using Spike</summary>
<br>  

#### *First of all, let's install the required tools and libraries*  
  
### What is SPIKE in RISCV?
> * A RISC-V ISA is a simulator, enabling the testing and analysis of RISC-V programs without the need for actual hardware.  
> * Spike is a free, open-source C++ simulator for the RISC-V ISA that models a RISC-V core and cache system. It can be used to run programs and a Linux kernel, and can be a starting point for running software on a RISC-V target.  

*Use the following command to install **SPIKE** in your machine*  
```
$ git clone https://github.com/riscv/riscv-isa-sim.git  
$ cd riscv-isa-sim  
$ mkdir build  
$ cd build  
$ sudo apt-get install device-tree-compiler // to install the missing dependencies   
$ sudo apt-get install libboost-all-dev // to install the libboost library
$ ../configure --prefix=/opt/riscv  
$ make  
$ sudo make install  
$ sudo apt update  
$ sudo apt install g++-8
$ make CXX=g++-8  
$ echo 'export PATH=$PATH:/opt/riscv/bin' >> ~/.bashrc
$ source ~/.bashrc  
```  
  
### What is pk (Proxy Kernel)?  
> * The RISC-V Proxy Kernel, pk , is a lightweight application execution environment that can host statically-linked RISC-V ELF binaries.  
> * A Proxy Kernel in the RISC-V ecosystem simplifies the interaction between complex hardware and the software running on it, making it easier to manage, test, and develop software and hardware projects.  

*Use the following command to install **pk** in your machine*  
```
Make sure you are on home directory  
$ git clone https://github.com/riscv/riscv-pk.git  
$ cd riscv-pk  
$ mkdir build  
$ cd build  
$ ../configure --prefix=/opt/riscv --host=riscv64-unknown-elf --with-arch=rv64gc  
$ make  
$ sudo make install  
```  

### Testing the SPIKE Simulator  
The target is to run the ```sum_1ton.c``` code using both ```gcc compiler``` and ```riscv compiler```, and both of the compiler must display the same output on the terminal. So to compile the code using **gcc compiler**, use the following command:  
```
gcc sum_1ton.c  
./a.out
```
And to compile the code using **riscv compiler**, use the following command:  
```
spike pk sum_1ton.o
```  
![Spike Simulation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/cc8a2bce-2d08-473d-9a7b-8c29e62af2e6)

#### Following are the snapshots of RISCV Objdump with **-O1** and **-Ofast** options  
RISCV Objdump with -O1 option  

![Objdump in -O1](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/b51c1c23-46da-466f-bf68-e77df442d9d0)

RISCV Objdump with -Ofast option  

![Objdump in -Ofast](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/cd08a920-dbf5-4b8e-8b11-12b9ed02e40e)

### Debugging the Assembly Language Program of  ```sum_1ton.c```  
* Open the **Objdump** of code by using the following command  
```
$ riscv64-unknown-elf-objdump -d sum_1ton.o | less  
```
* Open the debugger in another terminal by using the following command  
```
$ spike -d pk sum_1ton.o
```
* The debugger will be opened in the terminal. Now, debugging operations can be performed as shown in the following snapshot.

![Debugging](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/d02d0ccc-3501-4125-87a4-05b0ff9ec8bf) 
</details>

----------------------------------------

<details>
<summary><b>Task 5:</b> By making use of RISCV Core: Verilog Netlist and Testbench, perform an experiment of Functional Simulation and observe the waveforms</summary>  
<br>

>***NOTE:** Since the designing of RISCV Architecture and writing it's testbench is not the part of this Research Internship, so we will use the Verilog Code and Testbench of RISCV that has already been designed. The reference GitHub repository is : [iiitb_rv32i](https://github.com/vinayrayapati/rv32i/)*    
  
### Steps to perform functional simulation of RISCV  
1. Create a new directory with your name ```mkdir <your_name>```
2. Create two files by using ```touch``` command as ```maazm_rv32i.v``` and ```maazm_rv32i_tb.v```  
3. Copy the code from the reference github repo and paste it in your verilog and testbench files  
  
  
4. To run and simulate the verilog code, enter the following command:  
	```
	$ iverilog -o maazm_rv32i maazm_rv32i.v maazm_rv32i_tb.v
	$ ./maazm_rv32i
	```
5. To see the simulation waveform in GTKWave, enter the following command:
	```
	$ gtkwave maazm_rv32i.vcd
	```


6. The GTKWave will be opened and following window will be appeared  
  
  
  
#### As shown in the figure below, all the instructions in the given verilog file is hard-coded. Hard-coded means that instead of following the RISCV specifications bit pattern, the designer has hard-coded each instructions based on their own pattern. Hence the 32-bits instruction that we generated in Task-2 will not match with the given instruction.  
  

  
#### Following are the differences between standard RISCV ISA and the Instruction Set given in the reference repository:  
  
|  **Operation**  |  **Standard RISCV ISA**  |  **Hardcoded ISA**  |  
|  :----:  |  :----:  |  :----:  |  
|  ADD R6, R2, R1  |  32'h00110333  |  32'h02208300  |  
|  SUB R7, R1, R2  |  32'h402083b3  |  32'h02209380  |  
|  AND R8, R1, R3  |  32'h0030f433  |  32'h0230a400  |  
|  OR R9, R2, R5  |  32'h005164b3  |  32'h02513480  |  
|  XOR R10, R1, R4  |  32'h0040c533  |  32'h0240c500  |  
|  SLT R1, R2, R4  |  32'h0045a0b3  |  32'h02415580  |  
|  ADDI R12, R4, 5  |  32'h004120b3  |  32'h00520600  |  
|  BEQ R0, R0, 15  |  32'h00000f63  |  32'h00f00002  |  
|  SW R3, R1, 2  |  32'h0030a123  |  32'h00209181  |  
|  LW R13, R1, 2  |  32'h0020a683  |  32'h00208681  |   
  

#### *Analysing the Output Waveform of various instructions that we have covered in TASK-2*  
**```Instruction 1: ADD R6, R2, R1```**  
  

**```Instruction 2: SUB R7, R1, R2```**  
  

**```Instruction 3: AND R8, R1, R3```**  


**```Instruction 4: OR R9, R2, R5```**  


**```Instruction 5: XOR R10, R1, R4```**  


**```Instruction 6: SLT R1, R2, R4```**  


**```Instruction 7: ADDI R12, R4, 5```**  


**```Instruction 8: BEQ R0, R0, 15```**  
  
  
**```Instruction 9: BNE R0, R1, 20```**
 
</details>

--------------------------------------------------------------- 

 










  



	
	
	

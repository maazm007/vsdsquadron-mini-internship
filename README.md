#  VSDSquadron Mini Internship 2024

The program is based on the RISC-V architecture and uses open-source tools to teach people about VLSI chip design and RISC-V. The instructor for this internship is Kunal Ghosh Sir.

##  Basic Details

**Name:** Maaz Mahmood Siddique  
**College:** KIET Group of Institutions  
**Email ID:** maazms999@gmail.com  
**GitHub Profile:** [maazm007](https://github.com/maazm007?tab=repositories)

----------------------------------------------------------------------------------------------------------------

##  Task 1
1. Install Ubuntu 20.04 LTS on Oracle Virtual Machine Box

![Ubuntu and VMBox Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/11c35aff-f587-40f5-a7d2-683dbf0784d4)

2. Install **RISC-V** [GNU ToolChain](https://github.com/riscv-collab/riscv-gnu-toolchain)  
```
$ git clone https://github.com/riscv/riscv-gnu-toolchain
$ sudo apt-get install autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev libslirp-dev
$ ./configure --prefix=/opt/riscv
$ make linux
```
![RISC-V GNU Toolchain Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/2ca2294c-28f5-43dd-bf9d-41abf33c9d02)

3. Install ```Yosys Open SYnthesis Suite```
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

4. Install ```GTKwave``` waveform viewer  
```  
$ sudo apt update
$ sudo apt install gtkwave  
```
![gtkwave Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/11156322-7ae3-4cea-9e09-b7952764df28)

5. Install ```Icarus Verilog``` open source tool for simulation  
```  
$ sudo apt-get install iverilog
```
![iverilog Installation](https://github.com/maazm007/vsdsquadron-mini-internship/assets/83294849/0c3be648-2f4f-48d3-bb53-45bfc56ba9b2)

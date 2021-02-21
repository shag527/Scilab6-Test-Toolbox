## Test Toolbox for Scilab
This repository is a test toolbox for Scilab for implementing transpose function. It requires the "thirdparty" directory that can be found in the test directory of the toolbox. The "thirdparty" directory contains compiled library for a simple "transpose" function written in C. 

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

### Requirements
+ C/C++
+ Scilab 6.1.0
+ Ubuntu (18.04/19.10/20.04)
+ gettext (0.19)

### Steps
#### + Compiling the C Library
1. Go to test folder and make script executable by running the command chmod +x run.sh in the terminal.
2. Execute ./run.sh.
3. Copy the "thirdparty" directory to the toolbox directory 

#### + Loading the Toolbox
1. Run "exec builder.sce" on the scilab console to build the toolbox.
2. Run "exec loader.sce" on the scilab console to load the toolbox.  
3. Type "help" in the scilab console and browse through the help content of "test_toolbox". 

#### + Checking the Transpose
Run "y=transpose(A)" on the scilabe console, where A is the matrix whose transpose is to be calculated.

E.g. A = [1,2,3;4,5,6] 

#### + Unloading the Toolbox
Run "exec unload.sce" on the scilab console.

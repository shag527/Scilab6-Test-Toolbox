## Test Toolbox for Scilab
This repository is a test toolbox for Scilab for implementing transpose function. It requires the "thirdparty" directory that can be found in the test directory of the toolbox. The "thirdparty" directory contains compiled library for a simple "transpose" function written in C. 

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

<B>The detailed documentation can be found [here](https://drive.google.com/file/d/1WCuWx-9Hq1HWsP7m_hAzhlrekQzrpu-c/view?usp=sharing).</B>

### Requirements
+ C/C++
+ Scilab 6.1.0
+ Ubuntu (16.04/18.04/19.10/20.04)
+ gettext (0.19)

### Steps
#### 1. Cloning Repository
+ Clone the repository to your local computer.
+ Also, run ```sudo apt-get install gettext``` on the terminal, if gettext is not installed already.

#### 2. Compiling the C Library
+ Go to test folder and make the shell script executable by running the command ```chmod +x run.sh``` in the terminal.
+ Execute ./run.sh.
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/script.png" width="570" height="350">
  <br>
 </p>
 
+ Copy the "thirdparty" directory to the main toolbox directory. (Note: If thirdparty directory is not present in the main directory, building toolbox will give error)
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/With%20thirdparty.png" width="550" height="200">
  <br>
 </p>

#### 3. Building and Loading the Toolbox
+ Go to Scilab and run ```cd path_to_main_directory``` on the console.
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/path.png" width="750" height="550">
  <br>
 </p>
 
+ Run ```exec builder.sce``` on the scilab console to build the toolbox.
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/builder.png" width="750" height="550">
  <br>
 </p>
 
+ Run ```exec loader.sce``` on the scilab console to load the toolbox.  
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/loader.png" width="750" height="550">
  <br>
 </p>
 
+ Type ```help``` in the scilab console and browse through the help content of the test toolbox. 
<p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/help1.png" width="750" height="450">
  <br>
 </p>
 <p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/help2.png" width="750" height="450">
  <br>
 </p>

#### 4. Checking the Transpose
Run ```y=transpose(A)``` on the scilab console, where A is the matrix whose transpose is to be calculated.

E.g. A = [1,2,3;4,5,6] 

 <p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/trans.png" width="750" height="500">
  <br>
 </p>

#### 5. Unloading the Toolbox
Run ```exec unload.sce``` on the scilab console to unload the toolbox.
 <p align="center">
<img align="center" src="https://github.com/shag527/Scilab6-Test-Toolbox/blob/master/Images/unload.png" width="750" height="500">
  <br>
 </p>

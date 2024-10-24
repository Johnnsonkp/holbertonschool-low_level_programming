## C - Hello, World

### TASKS
### 0. Preprocessor
A preprocessor is a bash script that runs a C file saved in a variable. 

### 1. Compiler
```
gcc -C $CFILE 
```
- Compiles a C file without linking it
- The -C flag tells gcc to compile the source code but not link the object files into an executable
- Resulting in a (.o) extension file instead of .c

### 2. Assembler

```
gcc -S $FILE
```
- The script complies and outputs the assembly code of the specified C file
- The -S option tells gcc to the stop after the compilation phase, and generates an assembly language file

### 3. Name

```
gcc $CFILE -o cisfun
``` 
- The script compiles the c file and outputs the results into the cisfun executable file
- the -o specfies where to output the results. in this case its in the cisfun file
- if -o isn't specified an a.out file is created and used to store the output instead

### 4. Puts.c

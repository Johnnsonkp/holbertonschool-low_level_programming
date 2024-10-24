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
- The -S option tells gcc to the stop after the compilsation phase, and generates an assembly language file 

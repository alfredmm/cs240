# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. Called by Value (10 Points)

What it means called by value in C?<br />
What are the values being passed when arguments are integer and char array respectively?

**Answer**:
The call by value method happens when function copies the actual value of an argument into the formal parameter of the function. <br />
In a function call f(char a[], int v) the char array argument a is the array's address while integer argument v is the  actual value.

### 2. Scope (10 Points)

What is the scope of a variable in C? What's the usage of the key word *extern* in C?

**Answer**:
The scope of a variable is its level access in the program. In other words, it is the block of code in the program where the variable has been declared, used, and can be changed.<br />
“extern” is used to extend the visibility of a variable or a function. Functions are usually visible across the entire program. Hence,it is not usually necessary to declare or define 'extern' functions. The variables with “extern” keyword are not defined but just declared.

### 3. Static (10 Points)

What is the static key word means for an external and an internal variable?

**Answer**:
Internal static variables are visible in the particular function while external Static variables are visible throughout the program. Internal static variables will only be visible until the function's end while external static variables are visib;e in the entire program
### 4. Commandline Arguments (10 Points)

How to use commandline arguments in C? Give an example.

**Answer**:
Some values can be passed from the commandline to the C program as they are executed. These are usually referred to as command-line arguments. These arguments are useful in controlling the program from outside instead of using the hardcoding way. The main function is used to handle the commandline arguments.
Example of use of commandline arguments in C is:
```
#include <stdio.h>  
void main(int argc, char *argv[] )  {  
  
   printf("Program Name: %s\n", argv[0]);  
   
   if(argc < 2){  
      printf("No CommandLine Argument Passed.\n");  
   }  
   else{  
      printf("First Argumet: %s\n", argv[1]);  
   }  
}  
```

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](Coding_2.MD) and [Source Code](coding_2.c)

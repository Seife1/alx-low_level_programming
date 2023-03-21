# 0x02. C - Functions, nested loops

## What is nested loop?

* A loop inside loop

## What is a function ? Explain it briefly.

* A function is a group of statements that together perform a task.
* Every C program has at least one function, which is main().

## Defining a Function

* provides the actual body of the function.

The general form of a function definition in C programming language is as follows −

* return_type function_name( parameter list ) * 
* { *
  * body of the function *
* } *

## Function Declarations
* A function declaration tells the compiler about a function name and how to call the function.

** Calling a function **

While calling a function, there are two ways in which arguments can be passed to a function

1. Call by value : 
      * Copy the actual value (Argunment) to the formal parameteres (Declared variable that accept the values of the argunment).
      * Changes made to the parameter inside the function have no effect on the argument.
2. Call by reference.
      * This method copies the address of an argument into the formal parameter.
      * Changes made to the parameter affect the argument, due to the address is used to access the actual argument used in the call.

### Function prototype:

   A function prototype is a declaration of a function that provides information to the compiler about the function's name, return type, and parameter types.
   ** what to give to the function and what to expect from the function. **

## A Header File 
It is a file with extension ".h" which contains C function declarations and macro definitions to be shared between several source files. There are two types of header files: the files that the programmer writes and the files that comes with your compiler.

I. For system HEADERS.
  * \#include <file>
II. For HEADER values of your own program.
  * \#include "file"

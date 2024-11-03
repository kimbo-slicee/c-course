# C Programming👨‍💻Language Course 👨‍🏫
# what is C 🤔
C It was created in the 1970s 🗓 by **Dennis Ritchie**.
C is a general-purpose, procedural programming language that allows for low-level memory manipulation. It works by providing developers the ability to write code that can be compiled and executed on different platforms with efficiency. C is widely used for system-level programming [](like operating systems, compilers, etc.) and applications that require direct interaction with hardware.
# History of C
- 1969-B Language word Oriented (i.e not Byte oriented)
- 1972-C Multiple Type including(Byte/Character)
- 1972-1978-C and UNIX co-evolved with a goal of increasingly less assembly language in UNIX
- 1978-K& R C 
- 1989-C89/ANSI void type, C++ Declarations , Character sets locales
- 1990-C90/ISO C  
- 1999-C99-Complex Type,// comments Unicode 
- 2011-C11-Library Improvements
- 2018-C17 Cleanup Of C11 
# Uses of C ??
C language is used to programming a wide variety of 
systems one of the uses of are as follows.
- Major parts of Windows and linux and often operating system are written in C
- C is Used to Write device programming language and like Tablets Camera  
- C language is used to program embedded systems where programs need to run faster in limited memory 
- C is used to develop games an area where latency is very important 
# How C Language Works
**1 The main Function in C.**
In C, every program starts with the main function. This function is the entry point, where the execution of a program begins. Here’s an example of a simple main function:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
/**
 * int main(): The main function returns an integer to the operating system (typically 0 to indicate successful execution).printf: Outputs text to the console. return 0: Indicates that the program has ended successfully.
 */
```
C is a compiled language, which means that the code you write must be translated into machine code before it can be executed. This process involves several stages:
- Preprocessing: The preprocessor handles directives (like #include and #define), expands macros, and removes comments from the code.
- Compilation: The compiler translates the preprocessed code into assembly language.
- Assembly: The assembler converts the assembly code into machine code or object code.
- Linking: The linker combines the object code with necessary libraries and produces the final executable.
**C Compilers**
- GCC (GNU Compiler Collection): A widely used open-source compiler.
- Clang: A compiler front-end for the C language, part of the LLVM project.
- Microsoft Visual C++ (MSVC): Part of the Microsoft Visual Studio IDE.
- TinyCC (TCC): A lightweight, fast C compiler.
```c
gcc program.c -o program
```

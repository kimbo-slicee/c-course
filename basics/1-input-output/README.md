# Basic Input and Output in C
In C programming, input and output (I/O) operations, as well as many other essential functionalities, are facilitated by standard libraries. The most commonly used library for I/O in C is <stdio.h>. Let’s explore this and other related libraries in detail.
# What is <stdio.h>?
The <stdio.h> (Standard Input/Output Header) library provides functions for basic input and output operations. It includes:
- Functions for reading and writing to the console (scanf, printf).
- File handling functions (fopen, fclose, fread, fwrite).
- Other utilities for I/O stream manipulation.
# Commonly Used Functions in <stdio.h>
```c
printf("Hello, World!\n");
```
**Format Specifiers:**
- %d for integers.
- %f for floating-point numbers.
- %s for strings.
- %c for characters.
> [!NOTE]
> I wil cover all format Specifiers in Data type course 

Example: 
```c
int a = 10;
float b = 5.5;
printf("a = %d, b = %.2f\n", a, b); // Output: a = 10, b = 5.50

```



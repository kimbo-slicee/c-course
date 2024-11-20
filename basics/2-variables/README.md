# Variables 🎁 And Constants 🗿 and Data Type in C  
### Variables
Variables are containers 🗃 for storing data values, like numbers and characters. In C, there are different types of variables (defined with different keywords), for example: int - stores integers (whole numbers), without decimals, such as 123 or -123.
- float - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
### C Variable Names (Identifiers)
C Variable Names
All C variables must be identified with unique names.
These unique names are called identifiers.
Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
> [!NOTE]
> It is recommended to use descriptive names in order to create understandable and maintainable code: 
```c
// Good variable name
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```
### Constants
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
This will declare the variable as "constant", which means unchangeable and read-only:
### Data Type in C 
In C programming, data types are declarations for variables. This determines the type and size of data associated with variables.
Basic types
Here's a table containing commonly used types in C programming for quick access.

| type               | Size (bytes)               | Foramt Specifier        |
|--------------------|----------------------------|-------------------------|
| int                | at least 2, usually 4      | %d, %i                  |
| char	              | 1                          | %c                      |
| float              | 4                          | %f                      |
| double	           | 8                          | %lf                     |
| short int	       | 2 usually                  | %hd                     |
| long int           | at least 4, usually 8	     | %ld, %li                |
| unsigned int	      | at least 2, usually 4	     | %u                      |
| long long  int     | at least 8	                | %lld, %lli              |
| unsigned long int  | at least 4                 | %lu                     |
| unsigned long long | at least 8                 | %llu                    |
| signed char	       | char 1                     | %c                      |
| unsigned char      | char 1                     | %c                      |
| long double        | least 10, usually 12 or 16 | %Lf                     |

> [!NOTE]
> Derived Data Types that are derived from fundamental data types are derived types. For example: arrays,pointers function types, structures, etc.
We will learn about these derived data types later. bool type
Enumerated type
Complex types
### Constant in C 
### Comments in C 
# Pointer_Basics
Experiment 9
## Contents
- [Aim](#aim)
- [Software Used](#software-used)
- [Theory](#theory)
  * [Definition](#definition)
  * [Properties](#properties)
  * [Advantages](#Advantages)
- [Algorithms](#algorithms)
- [Conclusion](#conclusion)

## Aim 
To use basic pointers.

## Software Used 
VS Code, Dev C++

## Theory
**Definition**
<br>
A pointer is a variable that stores the memory address of another variable. It does not hold any actual data value like a normal variable, instead holds the location where the data is stored in memory. Pointers allow for efficient array and memory management, and can be used to directly manipulate memory.
Using pointers significantly improves performance for repetitive operations, like traversing iterable data structures (e.g. strings). In particular, it is often much cheaper in time and space to copy and dereference pointers than it is to copy and access the data to which the pointers point.  
The basic syntax to define a pointer is:
```cpp
int a = 5;
int *ptr = &a;
```
<br>  

> Visual Representation of memory address:
<br>

| Address | Contents     |
|---------|--------------|
| 0x8130  | 0x00000005   |
| 0x8134  | 0x00000000   |

<p align="left">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20221013162237/PointersinC.png" alt="Logo" width="600" length = "500">  
<br>
  
**Properties of Pointers**  
- An array, of any type, can be accessed with the help of pointers, without considering its subscript range.
- Pointers are used for file handling.
- Pointers are used to allocate memory dynamically.

**Advantages of Pointers**
- Memory efficiency: Pointers allow for memory-efficient data sharing between different parts of a program. 
- Improved performance: Pointers can help reduce code and improve program performance. 
- Multiple values: Pointers allow programmers to return multiple values from a function. 
- Data structure building: Pointers can be used to build complex data structures like linked lists, trees, and graphs

## Algorithms
### Pointer address
1. **Start**

2. **Initialize Variables**
   - Declare an integer variable `a` and assign it a value of 10.
   - Declare a pointer variable `aptr` of type `int*` and assign it the address of variable `a`.

3. **Print Values**
   - Print the value pointed to by `aptr` using `cout`. This will display the value of `a`.
   - Print the address stored in `aptr` using `cout`. 
   - Print the address of `a` directly using `cout`.

4. **End**

### Pointer increment
# Algorithm

1.  **Start**
2. **Initialize Variables**
   - Define an integer variable `a` with value 10.
   - Define a pointer variable `ptr` of type `int*` and set it to point to `a`.
   - Define a float variable `b` with value 9.4.
   - Define a pointer variable `fptr` of type `float*` and set it to point to `b`.
   - Define a char variable `c` with value 's'.
   - Define a pointer variable `cptr` of type `char*` and set it to point to `c`.
   - Define a bool variable `d` with value `1` (true).
   - Define a pointer variable `dptr` of type `bool*` and set it to point to `d`.

4. **Integer Pointer Operations**
   - Print "For integer".
   - Print "Before increment".
   - Print the address stored in `ptr` (address of `a`).
   - Increment `ptr` (move to the next integer address).
   - Print "After increment".
   - Print the new address stored in `ptr`.

5. **Float Pointer Operations**
   - Print"For float".
   - Print "Before increment".
   - Print the address stored in `fptr`.
   - Increment `fptr`.
   - Print "After increment".
   - Print the new address stored in `fptr`.

6. **Boolean Pointer Operations**
   - Print"For boolean".
   - Print "Before increment".
   - Print the address stored in `dptr`.
   - Increment `dptr`.
   - Print "After increment".
   - Print the new address stored in `dptr`.

7. **Character Pointer Operations**
   - Print "For character".
   - Print "Before increment".
   - Print the address stored in `cptr`.
   - Increment `cptr`.
   - Print "After increment".
   - Print the new address stored in `cptr`.

8. **End**

## Conclusion
we leart the basics of pointers.

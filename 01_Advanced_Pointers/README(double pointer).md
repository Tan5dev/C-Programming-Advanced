📂 Double Pointer

🎯 Objective

Learn how pointers can point to other pointers.

📚 Concepts Covered

- Pointer to Pointer
- Memory Address Storage
- Accessing Values using Double Pointers
- Understanding Multiple Levels of Indirection

🧠 Real World Usage

Double pointers are used in:

- Dynamic Memory Allocation
- Linked Lists
- Trees
- Function Arguments
- 2D Arrays

🔑 Key Concept

int num = 100;
int *ptr = &num;
int **dptr = &ptr;

- "ptr" stores address of "num"
- "dptr" stores address of "ptr"
- "**dptr" accesses actual value

🎯 Challenge

Modify the program:

1. Change value using "*ptr"
2. Change value using "**dptr"
3. Print updated values
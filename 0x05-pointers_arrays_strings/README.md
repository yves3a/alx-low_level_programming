# 0x05. C - Pointers, arrays and strings

## Resources
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Tasks

### 0. 98 Battery st.

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
- Prototype: `void reset_to_98(int *n);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `0-reset_to_98.c`

### 1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.
- Prototype: `void swap_int(int *a, int *b);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `1-swap.c`

### 2. This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.
- Prototype: `int _strlen(char *s);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
98
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `2-strlen.c`

### 3. I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.
- Prototype: `void _puts(char *str);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `3-puts.c`

### 4. I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.
- Prototype: `void print_rev(char *s);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `4-print_rev.c`

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.
- Prototype: `void rev_string(char *s);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
My School
loohcS yM
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `5-rev_string.c`

### 6. Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line.
- Prototype: `void puts2(char *str);`

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `6-puts2.c`

### 7. Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line.
- Prototype: `void puts_half(char *str);`
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `7-puts_half.c`

### 8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.
- Prototype: `void print_array(int *a, int n);`
- where n is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use printf

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `8-print_array.c`

### 9. strcpy

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
- Prototype: `char *_strcpy(char *dest, char *src);`
- Return value: the pointer to dest

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `9-strcpy.c`

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.
- Prototype: `int _atoi(char *s);`
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
- You are not allowed to use long
- You are not allowed to declare new variables of "type" array
- You are not allowed to hard-code special values
- We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `100-atoi.c`

### 11. Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.
- You are allowed to use the standard library
- You don't have to pass the betty-style tests (you still need to pass the betty-doc tests)
- man srand, rand, time
- gdb and objdump can help

```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-keygen -v
Tada! Congrats
julien@ubuntu:~/0x05$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x05-pointers_arrays_strings`
- File: `101-keygen.c`
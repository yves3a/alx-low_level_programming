# 0x07. C - Even more pointers, arrays and strings

## Resources
### Additional Resource
- [C - Pointer to Pointer](https://savanna.alxafrica.com/rltoken/eyikXPg7ZxCAEuWklB6xtQ)
- [C – Pointer to Pointer with example](https://savanna.alxafrica.com/rltoken/ojr7OUUm2I-MULE4lWlrkg)
- [Multi-dimensional Arrays in C](https://savanna.alxafrica.com/rltoken/HUZIJ6t55KM7d7FBCwWm8Q)
- [Two dimensional (2D) arrays in C programming with example](https://savanna.alxafrica.com/rltoken/Dx9nIBRj68sRBGe2NRI_aQ)
- [Arrays, Strings & Pointers in C Programming](https://savanna.alxafrica.com/rltoken/-Bg-0C4bORppo0cXqdCJQQ)

## Tasks

### 0. memset

Write a function that fills memory with a constant byte.
- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- Returns a pointer to the memory area `s`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
...
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `0-memset.c`

### 1. memcpy

Write a function that copies memory area.
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- Returns a pointer to `dest`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy 
...
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `1-memcpy.c`

### 2. strchr

Write a function that locates a character in a string.
- Prototype: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr 
llo
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `2-strchr.c`

### 3. strspn

Write a function that gets the length of a prefix substring.
- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn 
5
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `3-strspn.c`

### 4. strpbrk

Write a function that searches a string for any of a set of bytes.
- Prototype: `char *_strpbrk(char *s, char *accept);`
- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk 
llo, world
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `4-strpbrk.c`

### 5. strstr

Write a function that locates a substring.
- Prototype: `char *_strstr(char *haystack, char *needle);`
- Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr 
world
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `5-strstr.c`

### 6. Chess is mental torture

Write a function that prints the chessboard.
- Prototype: `void print_chessboard(char (*a)[8]);`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard 
rkbqkbkr
pppppppp


PPPPPPPP
RKBQKBKR
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `7-print_chessboard.c`

### 7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.
- Prototype: `void print_diagsums(int *a, int size);`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `8-print_diagsums.c`

### 8. Double pointer, double fun

Write a function that sets the value of a pointer to a char.
- Prototype: `void set_string(char **s, char *to);`

```bash
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x07-pointers_arrays_strings`
- File: `100-set_string.c`
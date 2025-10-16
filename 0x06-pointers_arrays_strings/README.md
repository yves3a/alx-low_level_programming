# 0x06. C - More pointers, arrays and strings

## Resources
### Additional Resource
- [Practical Use of Pointers in C Programming](https://savanna.alxafrica.com/rltoken/Jrl0HLgFXzZEUyYYbLed8g)

## Tasks

### 0. strcat

Write a function that concatenates two strings.
- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
World!
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `0-strcat.c`

### 1. strncat

Write a function that concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
    - it will use at most n bytes from `src`
    - `src` does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string `dest`

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
World!
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `1-strncat.c`

### 2. strncpy

Write a function that copies a string.
- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy`

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x46 0x69 0x72 0x73 0x74 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `2-strncpy.c`

### 3. strcmp

Write a function that compares two strings.
- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `3-strcmp.c`

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `4-rev_array.c`

### 5. Always look up

Write a function that changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *);`

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper 
LOOK UP!
LOOK UP!
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `5-string_toupper.c`

### 6. Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.
- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `6-cap_string.c`

### 7. Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into 1337.
- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- Prototype: `char *leet(char *);`
- You can only use one `if` in your code
- You can only use two loops in your code
- You are not allowed to use `switch`
- You are not allowed to use any ternary operation

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337 
3x3cu73 Pl4n 1337
3x3cu73 Pl4n 1337
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `7-leet.c`

### 8. rot13

Write a function that encodes a string using rot13.
- Prototype: `char *rot13(char *);`
- You can only use `if` statement once in your code
- You can only use two loops in your code
- You are not allowed to use `switch`
- You are not allowed to use any ternary operation

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
julien@ubuntu:~/0x06$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `100-rot13.c`

### 9. Numbers have life; they're not just symbols on paper

Write a function that prints an integer.
- Prototype: `void print_number(int n);`
- You can only use `_putchar` function to print
- You are not allowed to use `long`
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x06$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `101-print_number.c`

### 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work

Add one line to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints `a[2] = 98`, followed by a new line.
- You are not allowed to use the variable `a` in your new line of code
- You are not allowed to modify the variable `p`
- You can only write one statement
- You are not allowed to use `,`
- You are not allowed to code anything else than the line of expected line of code at the expected line
- Your code should be written at line 19, before the `;`
- Do not remove anything from the initial code (not even the comments)
- and don't change anything but the line of code you are adding (don't change the spaces to tabs!)
- You are allowed to use the standard library

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `102-magic.c`

### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art

Write a function that adds two numbers.
- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- Where `n1` and `n2` are the two numbers
- `r` is the buffer that the function will use to store the result
- `size_r` is the buffer size
- The function returns a pointer to the result
- You can assume that you will always get positive numbers, or 0
- You can assume that there will be only digits in the strings n1 and n2
- n1 and n2 will never be empty
- If the result can not be stored in r the function must return 0

```bash
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
julien@ubuntu:~/0x06$ ./103-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
Error
Error
Error
Error
Error
Error
Error
Error
julien@ubuntu:~/0x06$ 
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x06-pointers_arrays_strings`
- File: `103-infinite_add.c`
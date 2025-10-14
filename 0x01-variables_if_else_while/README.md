# 0x01. C - Variables, if, else, while

## Resources

**Read or watch:**

- [Everything you need to know to start with C.pdf](https://savanna.alxafrica.com/rltoken/PkAydT3D9u5pN3nPCAlNZQ) (*You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: "comments", "Data types | Integer types", "Declaration", "Characters", "Arithmetic operators", "Variables assignments", "Comparisons", "Logical operators", "if, if…else", "while loops".*)
- [Keywords and identifiers](https://savanna.alxafrica.com/rltoken/58ThnAAxwJv5s_ceKMMPhw)
- [Integers](https://savanna.alxafrica.com/rltoken/2sXkmDiD7BF7pNIOxMQWFA)
- [Arithmetic Operators in C](https://savanna.alxafrica.com/rltoken/S-b9MN2iELhSEwCI093Vzw)
- [If statements in C](https://savanna.alxafrica.com/rltoken/usvxrTB3ko5kGTq48p5fSA)
- [if...else statement](https://savanna.alxafrica.com/rltoken/CU6mSX1qdZKOhDEgmToUGA)
- [Relational operators](https://savanna.alxafrica.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA)
- [Logical operators](https://savanna.alxafrica.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ)
- [while loop in C](https://savanna.alxafrica.com/rltoken/mwx2_bj3gIFEgCqdwdTp4w)
- [While loop](https://savanna.alxafrica.com/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw)

**man or help:**
- `ascii` (*You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.*)

## Tasks

### 0. Positive anything is better than negative nothing

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

- You can find the source code [here](https://savanna.alxafrica.com/rltoken/Dg4SuuP8gvRYnE54wktySg)
- The variable `n` will store a different value every time you will run this program
- You don't have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The number, followed by
    - if the number is greater than 0: `is positive`
    - if the number is 0: `is zero`
    - if the number is less than 0: `is negative`
  - followed by a new line

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `0-positive_or_negative.c`

### 1. The last digit

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- You can find the source code [here](https://savanna.alxafrica.com/rltoken/rud8wr5x6VWeahUtd5P14A)
- The variable `n` will store a different value every time you run this program
- The output of the program should be:
  - The string `Last digit of`, followed by
  - `n`, followed by
  - the string `is`, followed by
    - if the last digit of `n` is greater than 5: `and is greater than 5`
    - if the last digit of `n` is 0: `and is 0`
    - if the last digit of `n` is less than 6 and not 0: `and is less than 6 and not 0`
  - followed by a new line

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -748255693 is -3 and is less than 6 and not 0
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `1-last_digit.c`

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `2-print_alphabet.c`

### 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `3-print_alphabets.c`

### 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `4-print_alphabt.c`

### 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- All your code should be in the `main` function

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers
0123456789
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `5-print_numbers.c`

### 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz
0123456789
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `6-print_numberz.c`

### 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `7-print_tebahpla.c`

### 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `8-print_base16.c`

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `9-print_comb.c`

### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- 01 and 10 are considered the same combination of the two digits 0 and 1
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` five times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `100-print_comb3.c`

### 11. The success combination in business is: Do what you do better... and: do more of what you do...

Write a program that prints all possible different combinations of three digits.

- Numbers must be separated by `,`, followed by a space
- The three digits must be different
- 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `101-print_comb4.c`

### 12. Software is eating the World

Write a program that prints all possible combinations of two two-digit numbers.

- The numbers should range from 0 to 99
- The two numbers should be separated by a space
- All numbers should be printed with two digits. 1 should be printed as 01
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00 01` and `01 00` are considered as the same combination of the numbers 0 and 1
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` eight times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 98 99
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: `102-print_comb5.c`

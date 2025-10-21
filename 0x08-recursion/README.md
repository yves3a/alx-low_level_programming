# 0x08. C - Recursion

## Resources
### Additional Resource
- [0x08. Recursion, introduction](https://savanna.alxafrica.com/rltoken/dzZB83Hm3lO7dScjhebAxw)
- [What on Earth is Recursion?](https://savanna.alxafrica.com/rltoken/xYjKl3024oN58Bi_621_vQ)
- [C - Recursion](https://savanna.alxafrica.com/rltoken/u4ojc5CZpf4qiuQvmXCiOA)
- [C Programming Tutorial 85, Recursion pt.1](https://savanna.alxafrica.com/rltoken/Wv-wffgpXelN9ZTrbmiOyA)
- [C Programming Tutorial 86, Recursion pt.2](https://savanna.alxafrica.com/rltoken/7GVdI-KT-M1vOIzwEjSahQ)
- [Recursion & Recursive functions in C Programming](https://savanna.alxafrica.com/rltoken/TreRmmRkZ3jYdFZZW6p6vw)

## Tasks

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
- **Description**: Write a function that prints a string, followed by a new line.
- **Prototype**: `void _puts_recursion(char *s);`
- **File**: `0-puts_recursion.c`

#### Example
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
```

### 1. Why is it so important to dream? Because, in my dreams we are together
- **Description**: Write a function that prints a string in reverse.
- **Prototype**: `void _print_rev_recursion(char *s);`
- **File**: `1-print_rev_recursion.c`

#### Example
```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
```

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
- **Description**: Write a function that returns the length of a string.
- **Prototype**: `int _strlen_recursion(char *s);`
- **File**: `2-strlen_recursion.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
}
```

### 3. You mustn't be afraid to dream a little bigger, darling
- **Description**: Write a function that returns the factorial of a given number.
- **Prototype**: `int factorial(int n);`
- **File**: `3-factorial.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
```

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
- **Description**: Write a function that returns the value of `x` raised to the power of `y`.
- **Prototype**: `int _pow_recursion(int x, int y);`
- **File**: `4-pow_recursion.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
```

### 5. Your subconscious is looking for the dreamer
- **Description**: Write a function that returns the natural square root of a number.
- **Prototype**: `int _sqrt_recursion(int n);`
- **File**: `5-sqrt_recursion.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
```

### 6. Inception. Is it possible?
- **Description**: Write a function that returns `1` if the input integer is a prime number, otherwise return `0`.
- **Prototype**: `int is_prime_number(int n);`
- **File**: `6-is_prime_number.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
```

### 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
- **Description**: Write a function that returns `1` if a string is a palindrome and `0` if not.
- **Prototype**: `int is_palindrome(char *s);`
- **File**: `100-is_palindrome.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
```

### 8. Inception. Now, before you bother telling me it's impossible...
- **Description**: Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
- **Prototype**: `int wildcmp(char *s1, char *s2);`
- **File**: `101-wildcmp.c`

#### Example
```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
```
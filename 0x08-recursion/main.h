#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
void print_rev_with_newline(char *s);
int sqrt_finder(int n, int root);
int prime_helper(int n, int div);
char *postfix_match(char *str, char *postfix);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);

#endif

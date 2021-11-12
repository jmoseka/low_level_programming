#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
void reverse_array(int *a, int n);
void print_number(int n);
int _putchar(char c);
char *leet(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *rot13(char *);
#endif

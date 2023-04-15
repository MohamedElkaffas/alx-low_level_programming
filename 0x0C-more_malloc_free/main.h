
#ifndef main_H
#define main_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int check_number(char *str);
unsigned int string_length(char *str);
void print_string(char *str);
void *_calloc(unsigned int number, unsigned int size);
int _putchar(char c);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int is_digit(char *s);
int _strlen(char *s);
void errors(void);

#endif

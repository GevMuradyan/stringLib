#ifndef STRING_UTILISH_H
#define STRING_UTILISH_H
#include <stddef.h>

size_t my_strlen(const char* str);
char* my_strcpy(char* dest, const char* str);
char* my_strncpy(char * dest, const char* str, int n);
char* my_strcat(char* dest, const char* str);
int my_strcmp(const char* str1, const char *str2);
char* my_strchr(const char* str, int ch);
char* my_strrchr(const char* str, int ch);
char* my_strstr(const char* haystack, const char* needle);
int my_strspn(const char* str, const char*accept);
int my_strcspn(const char* str, const char* reject);
char* my_strpbrk(const char *str, const char *accept);
char* my_strtok(char *str, const char *delim);
int my_count_char(const char *str, char ch);
int my_strequal(const char *str1, const char *str2);
void my_fill_string(char *str, char ch);
int my_strlastindex(const char *str, char ch);
void my_strreverse(char *str);
int my_strpalindrome(const char *str);


#endif
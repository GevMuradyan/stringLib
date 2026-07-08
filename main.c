#include "string_utils.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>


int main()
{
    printf("========== my_strlen ==========\n");

    char str1[] = "Hello World";

    printf("String: %s\n", str1);
    printf("my_strlen: %ld\n", my_strlen(str1));



    printf("========== my_strcpy ==========\n");

    char src[] = "Programming";
    char dest1[50];

    my_strcpy(dest1, src);

    printf("Source:      %s\n", src);
    printf("Destination:%s\n\n", dest1);



    printf("========== my_strncpy ==========\n");

    char dest2[50];

    my_strncpy(dest2, "Hello", 10);

    printf("Result: %s\n\n", dest2);



    printf("========== my_strcat ==========\n");

    char first[50] = "Hello ";

    my_strcat(first, "World");

    printf("Result: %s\n\n", first);



    printf("========== my_strcmp ==========\n");

    printf("abc vs abc = %d\n", my_strcmp("abc","abc"));
    printf("abc vs abd = %d\n", my_strcmp("abc","abd"));
    printf("abd vs abc = %d\n\n", my_strcmp("abd","abc"));



    printf("========== my_strchr ==========\n");

    char text[] = "Hello World";

    char *p = my_strchr(text,'W');

    if(p)
        printf("Found: %s\n",p);
    else
        printf("Not found\n");

    printf("\n");



    printf("========== my_strrchr ==========\n");

    char text2[] = "banana";

    char *p2 = my_strrchr(text2,'a');

    if(p2)
        printf("Last a: %s\n",p2);
    else
        printf("Not found\n");

    printf("\n");



    printf("========== my_strstr ==========\n");

    char big[] = "I love programming";

    char *p3 = my_strstr(big,"program");

    if(p3)
        printf("Found: %s\n",p3);
    else
        printf("Not found\n");

    printf("\n");



    printf("========== my_strspn ==========\n");

    printf("%d\n",
           my_strspn("abc123","abc"));

    printf("\n");



    printf("========== my_strcspn ==========\n");

    printf("%d\n",
           my_strcspn("hello123","123"));

    printf("\n");



    printf("========== my_strpbrk ==========\n");

    char *p4 = my_strpbrk("hello world","xyzod");

    if(p4)
        printf("Found: %s\n",p4);
    else
        printf("Not found\n");

    printf("\n");



    printf("========== my_strtok ==========\n");

    char words[] = "one,two,three";

    char *token;

    token = my_strtok(words,",");

    while(token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL,",");
    }

    printf("\n");



    printf("========== my_count_char ==========\n");

    printf("Count l: %d\n",
           my_count_char("hello world",'l'));

    printf("\n");



    printf("========== my_strequal ==========\n");

    printf("hello hello: %d\n",
           my_strequal("hello","hello"));

    printf("hello world: %d\n",
           my_strequal("hello","world"));

    printf("\n");



    printf("========== my_fill_string ==========\n");

    char fill[]="abcdef";

    my_fill_string(fill,'x');

    printf("%s\n\n",fill);



    printf("========== my_strlastindex ==========\n");

    printf("%d\n",
           my_strlastindex("hello world",'o'));

    printf("\n");



    printf("========== my_strreverse ==========\n");

    char reverse[]="hello world";

    my_strreverse(reverse);

    printf("%s\n\n",reverse);



    printf("========== my_strpalindrome ==========\n");

    printf("level: %d\n",
           my_strpalindrome("level"));

    printf("hello: %d\n",
           my_strpalindrome("hello"));



    return 0;
}
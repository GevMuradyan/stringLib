#include <stddef.h>

size_t my_strlen(const char* str){
    size_t count = 0;
    size_t i = 0;
    while(1){
        if(str[i] == '\0'){
            return count;
        }
        count++;
        i++;
    }
}

char* my_strcpy(char* dest, const char* str){
    size_t i = 0;
    while(1){
        if(str[i] == '\0'){
            dest[i] = str[i];
            return dest;
        }
        dest[i] = str[i];
        i++;
    }
}

char* my_strncpy(char * dest, const char* str, int n){
    size_t i = 0;
    while(i < n && str[i] != '\0'){
        dest[i] = str[i];
        i++; 
    }
    while(i < n){
        dest[i] = '\0';
        ++i;
    }
    return dest;
}

char* my_strcat(char* dest, const char* str){

    size_t i = my_strlen(dest);
    size_t j = 0;

    while(str[j] != '\0'){
        dest[i] = str[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int my_strcmp(const char* str1, const char*str2){
    size_t i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){

            return str1[i] - str2[i];
        }
        ++i;
    }
    return  str1[i] - str2[i];
    }

char* my_strchr(const char* str, int ch){
    size_t i = 0;
    while(str[i] != '\0'){
        if(str[i] == ch){
            return (char*)&str[i];
        }
        ++i;
    }
    return NULL;
}

char* my_strrchr(const char* str, int ch){
    size_t i = 0;
    char* res = NULL;
    while(str[i] != '\0'){
        if(str[i] == ch){
            res = (char*)&str[i];
        }
        ++i;
    }
    return res;
}
char* my_strstr(const char* haystack, const char* needle){

    size_t i = 0;
    size_t j = 0;
    size_t pos = 0;

    size_t len = my_strlen(needle);


    if(len == 0)
    {
        return (char*)haystack;
    }


    while(haystack[i] != '\0')
    {
        if(haystack[i] == needle[0])
        {
            pos = i;
            j = 0;


            while(needle[j] != '\0' &&
                  haystack[i] == needle[j])
            {
                i++;
                j++;
            }


            if(j == len)
            {
                return (char*)&haystack[pos];
            }


            i = pos;
        }


        i++;
    }


    return NULL;
}

int my_strspn(const char* str, const char* accept){
    int count = 0;
    int find = 0;
    size_t len_str = my_strlen(str);
    size_t len_accept = my_strlen(accept);
        for(int i = 0; i < len_str; ++i){
                find = count;
            for(int j = 0; j < len_accept; ++j){
                if(str[i] == accept[j]){
                    count++;
                    break;
                }
            }
                if(count == find ){
                    return count;
            }
        }
        return count;
    }
    
int my_strcspn(const char* str, const char* reject){
    int count = 0;
    size_t len_str = my_strlen(str);
    size_t len_reject = my_strlen(reject);

        for(int i = 0; i < len_str; ++i){
            for(int j = 0; j < len_reject; ++j){
                if(str[i] == reject[j]){
                    return count;
                }
            }
            count ++;
        }
        return count;
    }

char* my_strpbrk(const char *str, const char *accept){
    size_t len_str = my_strlen(str);
    size_t len_accept = my_strlen(accept);

    for(int i = 0; i < len_str; ++i){
        for(int j = 0; j < len_accept; ++j){
            if(str[i] == accept[j]){
                return (char*)&str[i];
            }
        }
    }
    return NULL; 
}
    
static char* second_address ;

static char* second_address = NULL;


char* my_strtok(char *str, const char *delim)
{
    if(str != NULL){
        second_address = str;
    }
    else{
        str = second_address;
    }


    if(str == NULL){
        return NULL;
    }


    size_t len_delim = my_strlen(delim);

    size_t i = 0;


    while(str[i] != '\0'){
        for(size_t j = 0; j < len_delim; j++){
            if(str[i] == delim[j]){
                str[i] = '\0';

                second_address = &str[i + 1];

                return str;
            }
        }

        i++;
    }


    second_address = NULL;

    return str;
}
int my_count_char(const char *str, char ch){
    size_t count = 0;
    size_t i = 0;

    while(str[i] != '\0'){
        if(str[i] == ch){
            count++;
        }
        ++i;
    }
    return count;
}

int my_strequal(const char *str1, const char *str2){
    size_t len1 = my_strlen(str1);
    size_t len2 = my_strlen(str2);

    if(len1 != len2){
        return 0;
    }

    size_t i = 0;
    while(str1[i]!= '\0'){
        if(str1[i] != str2[i]){
            return 0;
        }
        ++i;
    }
    return 1;
}

void my_fill_string(char *str, char ch){
    size_t i = 0;

    while(str[i] != '\0'){
        str[i] = ch;
        ++i;
    }
}

int my_strlastindex(const char *str, char ch){
    size_t i = 0;
    size_t res = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == ch){
            res = i;
            count ++;
        }
        ++i;
    }
    if(count != 0){
        return res;
    }
    else{
        return -1;
    }
}

void my_strreverse(char *str){
    size_t i = 0;
    size_t j = my_strlen(str) - 1;
    char tmp;
    while(i < j){
            tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;

            ++i;
            --j;
    }
    i = 0;
    size_t pos = 0;
    while(str[i] != '\0'){
    while(str[i] != ' ' && str[i] != '\0'){
            ++i;
        }
            j = i - 1;
            while(pos  < j){
            tmp = str[pos];
            str[pos] = str[j];
            str[j] = tmp;
                ++pos;
                --j;
        }

        if(str[i] == '\0'){
            break;
       }
       ++i;
       pos = i;
    }
}

int my_strpalindrome(const char *str){
    size_t i = 0;
    size_t j = my_strlen(str) - 1;
    while(i < j){
        if(str[i] != str[j]){
            return 0;
        }
        ++i; --j;
    }
    return 1;
}

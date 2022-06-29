#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strlcpy(char* cpy, char* source, size_t size)
{
    int n = strlen(source);
    if(size > n) 
        size = n;
    int i = 0;
    for(i = 0; i < size; i++)
         cpy[i] = source[i];
    cpy[i] = '\0';
    return;
}

void strlcat(char* s, char* source, size_t size)
{
    int m = strlen(source);
    int n = strlen(s);
    if(size > m) 
        size = m;
    int i = n;
    for(i = n; i < n+m; i++) 
        s[i] = source[i-n];
    s[i] = '\0';
    return;
}

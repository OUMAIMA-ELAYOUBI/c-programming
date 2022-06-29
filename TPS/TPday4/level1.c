#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int al_strlen(char* x)
{
    int c = 0;
    while(x[c] != '\0') 
        c++;
    return c;
}

void al_strcpy(char* dest, char* source)
{
    int n = al_strlen(dest);
    for(int i = 0; i < n; i++)
         dest[i] = source[i];
}


char* al_strcat(char* s1, char* s2){
    int len1 = al_strlen(s1);
    int len2 = al_strlen(s2);
    for(int i=0;i<len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    s1[len1+len2] = '\0';
    return s1;
}

void str_reverse(char* s)
{
    int i;
    int c = 0;
    while(s[c] != '\0') 
        c++;
    for(i = 0; i < c/2; i++)
    {
        char z = s[i];
        s[i] = s[c-i-1];
        s[c-i-1] = z;
    }
}

void str_wreverse(char* s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        int j = i;
        while(s[j] != ' ' && s[j] != '\0')
             j++;
        if(j != i)
        {
            for(int l = i; l < (j+i)/2; l++)
            {
                char z = s[l];
                s[l] = s[j+i-l-1];
                s[j+i-l-1] = z;
            }
        }
        if(s[j] != '\0')
            j++;
        i = j;
    }    
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int al_strlen(char* s){
    int c = 0;
    while(s[c] != '\0') c++;
    return c;
}


char* al_strcpy(char* s, char* c)
{
    int n = al_strlen(c);
    for(int i=0;i<n;i++)
    {
        s[i] = c[i];
    }
    s[n] = '\0';
    return s;
}


char* al_strcat(char* s1, char* s2)
{
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
    int n=al_strlen(s); 
    char c;
    for(int i=0;i<n/2;i++)
    {
        c=s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = c;

    }
}


void str_wreverse(char* s){
    int i = 0;
    while(s[i] != '\0'){
        int j = i;
        while(s[j] != ' ' && s[j] != '\0')
            j++;
        if(j != i)
        {
            for(int a = i; a < (j+i)/2; a++)
            {
                char z = s[a];
                s[a] = s[j+i-a-1];
                s[j+i-a-1] = z;
            }
        }
        if(s[j] != '\0')
            j++;
        i = j;
    }    
}

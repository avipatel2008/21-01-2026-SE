#include <stdio.h>

void main(){
    char str[] = "Hello";
    int a = 5;
    int *ip;
    ip = &a;
    char *p; // declare pointer // pointer to int, string, float
    p= str; // 
    
    printf("%s\n",str);
    printf("%s", p);
    printf("%d", a);
    printf("%d", *ip); // derference operator
}
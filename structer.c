#include <stdio.h>
void main(){
    struct Student {
        char name[50];
        char Grade;
        int rollno;
    };
    
    struct Student s1;
    s1.rollno = 1;
    // s1.name = "Jatin";
    s1.Grade = 'A';
    
    printf("%d", s1.rollno);
    // printf("%s", s1.name);
    printf("%c", s1.Grade);

    
}
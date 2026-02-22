#include <stdio.h>

int main(){
    FILE *fp;
    
    fp = fopen("students.txt", "r");
    
    if(fp==NULL){
        printf("file doesn't exist!");
        return 1;
    }
    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    
    fclose(fp);
}
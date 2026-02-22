#include <stdio.h>

int main(){
    FILE *fp;
    
    fp = fopen("students.txt", "w");
    
    if(fp==NULL){
        printf("file doesn't exist!");
        return 1;
    }
    
    fprintf(fp,"this will overwrite everything");
    
    fclose(fp);
}
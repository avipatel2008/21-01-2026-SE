#include <stdio.h>


int main(){
    FILE *fp;
    
    fp = fopen("students.txt", "a");
    
    if(fp==NULL){
        printf("file doesn't exist!");
        return 1;
    }
    
    fprintf(fp,"this will append to the file\n");
    
    fclose(fp);
}
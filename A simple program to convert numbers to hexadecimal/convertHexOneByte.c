#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void flush(){
    int clear;     
    while ((clear = getc(stdin)) != 0x0A && clear != EOF) {     
    } 
}

int main(){

    char num [20];
    long int h;
    char *ptr;
    while(1) {
        printf("Enter a number x to exit.\n");
        fgets(num,sizeof(num),stdin);
        num[strcspn(num,"\n")]=0;
        if(strlen(num) >= 19){
            flush();
        }
        if(strcmp(num, "x")==0){
            break;
        }
        h = strtol(num,&ptr,10);
        if(h < 0  || h > 255){
            printf("Enter a min of 0 max of 255.\n");
        } else if (*ptr == 0x20) {
            printf("\nTry not to enter spaces between numbers.\n\n");
        }else if(ptr == num){
            printf("\nEnter a number only.\n\n");
        }else if(*ptr != '\0'){
            printf("\nDont enter a text after a number.\n\n");
        }else{
            printf("\nThe hexadecimal number is: 0x%02lx or %02lx\n\n",h,h); 
        }
    }

    return 0;
}


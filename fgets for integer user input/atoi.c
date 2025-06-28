#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flush(){
    int clean;
    while((clean = (getc(stdin) != '\n')) && clean != EOF){
    }
}

int main(){   
    char number [10];
    int a; 
    while(1){
        printf("Enter a number x to exit.\n");
        fgets(number,sizeof(number),stdin);
        number[strcspn(number,"\n")]=0;
        if(strlen(number) >= 9){
            flush();
        }
        if(strcmp(number, "x")==0){
                break;
        } 
        a = atoi(number);
        if(a <=0){
            printf("\nEnter a number only 1 or more.\n\n");
            continue;
        } 
        printf("You entered: %d\n",a + 1);
    }    
return 0;
}

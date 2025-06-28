#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flush(){
    int clean;
    while((clean = (getc(stdin) != '\n')) && clean != EOF){
    }
}

int main(){  
       char num [10];
    char *ptr;
    long int x; 
    while(1){
        printf("Enter a number.%c",0x0A);
        fgets(num,10,stdin);
        num[strcspn(num,"\n")]=0;
        if(strlen(num) >=9){
            flush();
        }
        if(strcmp(num,"x")==0){
            break;
        }
        x = strtol(num,&ptr,10);
    	if(ptr == num){
	    printf("\nEnter a number only.\n\n");
     	}else if(*ptr != '\0'){
	        printf("\nDont enter a text after a number.\n\n");
	    }else{
            printf("You entered: %ld\n",x + 1);
	    }
    }
return 0;
} 

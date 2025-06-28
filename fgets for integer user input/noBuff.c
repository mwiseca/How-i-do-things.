#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>



int main(){  
       char num [2000];
    char *ptr;
    long int x;
    while(1){
        printf("Enter a number.%c",0x0A);
        fgets(num,sizeof(num),stdin);
        num[strcspn(num,"\n")]=0;
        if(strcmp(num,"x")==0){
            break;
        }
        errno = 0; 
        x = strtol(num,&ptr,10);
        if(errno == ERANGE){
            printf("\nYou entered to many digits.\n\n");
        }else if(ptr == num){
	    printf("\nEnter a number only.\n\n");
     	}else if(*ptr != '\0'){
	        printf("\nDont enter a text after a number.\n\n");
	    }else{
            printf("You entered: %ld\n",x + 1);
	    }
    }
return 0;
} 

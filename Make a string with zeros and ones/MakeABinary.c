#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void clean(){
    int clear;
    while((clear = getc(stdin)) != '\n' && clear != EOF){
    }
}

int main(){
    char changeCase [50];
    int result;
    char num [10];
    int n;
    while(1){
        printf("Enter the number 65 to 122 for a letter x to exit.\n");
	fgets(num,10,stdin);
	num[strcspn(num,"\n")]=0;
	if(strlen(num) >= 9){
        clean();
	} else if(strcmp(num,"x")==0) {
	   break;
	}
        n = atoi(num);
    	if(n <= 64 || n >= 123) {
	    printf("That is not a valid number start over.\n");
	    continue;
        }	    
        printf("Enter u for upper case l for lower case x to exit.\n");
	while(fgets(changeCase,50,stdin)) {
          	changeCase[strcspn(changeCase,"\n")]=0;
	    if(strlen(changeCase) >= 49){
	        clean();
	        printf("You entererd to many characters.\n"); 
	    }else if(strcmp(changeCase, "u")!=0 && strcmp(changeCase,"l")!=0 && strcmp(changeCase,"x")!=0) {
	        printf("\nEnter u or l  or x only.\n\n"); 
	    }else{
	        break;
	    }
	}
	if(strcmp(changeCase,"u")==0){
	    result = n - 64;
	    printf("\nThe number on the left side is 010. The remainder is: %d.\n\n",result);
	    printf("    128 64 32 16 8 4 2 1  The 0s under the numbers become ones that match the remainder.\n");
	    printf("     0  1  0  0  0 0 0 0 \n\n");  
	} else if (strcmp(changeCase,"l")==0){
	    result = n - 96;
            printf("\nThe number on the left side is 011. The remainder is: %d.\n\n",result);
	    printf("    128 64 32 16 8 4 2 1  The 0s under the numbers become ones that match the remainder.\n");
	    printf("     0  1  1  0  0 0 0 0 \n\n");   	     
        } else if (strcmp(changeCase,"x")==0) {
	    break;
	}	
    }
return 0;
}
        
	   

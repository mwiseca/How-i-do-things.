#include <stdio.h>
#include <string.h>

/*This is a simple program that asks for a name and age and prints it out on the terminal.
  The "if(strlen(name) >= 19){" is so it wont clear input buffer if less than 19 characters
  are entered. That prevents the user having to press enter twice while not having the program
  skip scanf and read That is not a number.
  Scanf is in a while loop that repeats if scanf != 1 so if a character and not a intager is entered
  it will display That is not a number if to many characters are entered. 
  The 9 byte limit in scanf "%9d" is so it wont display -1 if to many numbers are entered. 
  The "if(strlen(name) >= 19){" can be avoided if "__fpurge(stdin);" or "fflush(stdin);" are used.
  to flush the input buffer instead of the clean function. They dont work with all compilers.*/

void clean(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

int main() {
    char name [20];
    int age;
    while(1) {
        printf("Enter your name x to exit..\n");
        fgets(name,20,stdin);
        name[strcspn(name,"\n")]=0;
        if(strlen(name) >= 19){
            clean();
        } else if (strcmp(name,"x")==0) {
	    break;
	}	
            printf("Enter your age.\n");
	    while(scanf("%9d",&age)!=1){
	        clean();
	        printf("\nThat is not a number.\n\n");
	    }
         clean();
         printf("Your name is %s and you are %d years old.\n",name,age);	
    }
return 0;
}

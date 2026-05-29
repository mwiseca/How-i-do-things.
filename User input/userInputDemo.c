#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
void flush(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

int main() {
    char name [50];
    char age [25];
    long int y;
    char *ptr;

    printf("Enter your name.\n");
    while(fgets(name,sizeof(name),stdin) == NULL) {
        clearerr(stdin);
        printf("\nInvalid input.\n\n");
    }
    name[strcspn(name,"\n")]=0;
    if(strlen(name) >= 49) {
        flush();
    }
    printf("Enter your age.\n");
    while(1) {
        if(fgets(age,sizeof(age),stdin) == NULL) {
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
            continue;
        }
        age[strcspn(age,"\n")]=0;
        if(strlen(age) >= 24) {
            flush();
        }
        errno = 0;
        y = strtol(age,&ptr,10);
        if(errno == ERANGE) {
            printf("\nNumber out of range.\n\n");
        } else if(*ptr == 0x20) {
            printf("\nTry not to enter spaces between numbers.\n\n");
        } else if(ptr == age) {
            printf("\nEnter a number only.\n\n");
        } else if(*ptr != '\0') {
            printf("\nTry not to enter text after a number.\n\n");
        } else {
           printf("Your name is %s you are %ld years old.\n",name,y);
           break;
        }
    }
return 0;
}







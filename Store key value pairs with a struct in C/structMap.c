#include <stdio.h>
#include <string.h>

void flush() {
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void keys() {
    printf("      Van\n");
    printf("      Pick up truck\n");
    printf("      Car and trailer\n");
    printf("      Push it\n");
}

struct Bike {
    const char *key;
    int value;
};



int main() {
   
   struct Bike b1[] = {
        {"Van",            10},
        {"Pick up truck",   6},
        {"Car and trailer", 3},
        {"Push it",         1},
    };

    char select [25]; 
    while(1) {
        printf("Enter a method of getting your bike to the track i for index  x to exit.\n");
        while(fgets(select,25,stdin) == NULL) {
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= 24) {
            flush();
        }
        if(strcmp(select,"i")==0) {
            keys();
        } else if(strcmp(select,"x")==0) {
            break;
        }
        int index = -1;
        for(int i = 0;i<4;i++) {
            
            if(strcmp(select,b1[i].key)==0){
                index = i;
            }
        }
        if(index == -1) {
            printf("\nKey error: Enter a key in index only.\n\n");
            continue;
        }
       
        printf("%d\n",b1[index].value);
    }
return 0;
}


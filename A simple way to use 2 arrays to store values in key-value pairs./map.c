
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void flush(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

int main() {
    int keys [8] = {1,2,3,4,5,6,7,8};
    int values [8] = {1,16,256,4096,65356,1048576,16777216,268435456};
    char select [20];
    int sel;
    while(1) {
        printf("Enter a number 1 to 8 x to exit.\n");
        while(fgets(select,sizeof(select),stdin) == NULL){
            clearerr(stdin);
            printf("\nInvalid entry.\n\n");   
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >=19){
            flush();
        }
        if(strcmp(select,"x")==0){
            break;
        }
        sel = atoi(select);      
        int number = -1;
        for(int i = 0; i < 8; i++){
            if (keys[i] == sel) {
                number = i;
            }
        }
        if(number == -1){
            printf("\nKey error: Enter a number between 1 and 8 only.\n\n");
            continue;
        }
        printf("%d\n", values[number]);
    }
    return 0;
}


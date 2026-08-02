#include <stdio.h>
#include <string.h>

void flush(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void array(){
    printf("make a array.\n");
}

void string(){
    printf("Make a string.\n");
}

void ifStatement(){
    printf("Make a if statement.\n");
}

void elseIf(){
    printf("Make a else if statement.\n");
}

struct menu {
    const char* keys;
    void(*values)(void);
};

int main() {
    struct menu m1[] = {
        {"a",     array},
        {"b",     string},
        {"c",     ifStatement},
        {"d",     elseIf},
    };
    char select [25];
    printf("Enter a,b,c or d x to exit.\n");
    while(1) {
        if(fgets(select,sizeof(select),stdin) == NULL) {
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
            continue;
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= 24) {
            flush();
        }
        if(strcmp(select,"x")==0) {
            break;
        }
        int index = -1;
        for(int i = 0;i<4;i++) {
            if(strcmp(select, m1[i].keys) == 0) {
                index = i;
            }
        }
        if(index == -1) {
            printf("\nKey error: Enter a,b,c or d only.\n\n");
            continue;
        }
        m1[index].values();
    }
return 0;
}










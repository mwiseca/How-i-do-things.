#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void flush() {
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void keys() {
    printf("      10 \n");
    printf("      30 \n");
    printf("      255\n");
    printf("      256\n");
}

struct Numbers {
    int key;
    const char *value;
};



int main() {

    struct Numbers n1[] = {
        {10,     "It is 0x0a"},
        {30,     "It is 0x1e"},
        {255,    "It is 0xff"},
        {256,   "It is 0x100"},
    };

    char select [25]; 
    long int y;
    char *ptr;

    while(1) {
        printf("Enter a number in index to get the hexadecimal number  x to exit.\n");
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
        errno = 0;
        y = strtol(select,&ptr,10);
        if(errno == ERANGE || *ptr == 0x20 || ptr == select || *ptr != '\0') {
            printf("\nEnter a number only.\n\n");
            continue;
        }
        int index = -1;
        for(int i = 0;i<4;i++) {
            if(y == n1[i].key) { 
                index = i;
            }
        }
        if(index == -1) {
            printf("\nKey error: Enter a number in index only.\n\n");
            continue;
        }

        printf("%s\n",n1[index].value);
    }
    return 0;
}


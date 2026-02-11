#include <stdio.h>

/*
  This program prints the message "Hello world." using hexadecimal numbers and pointers.

  Each character of the message is stored as a hexadecimal number 
  Think of them as integer values that represent letters.
*/


int main() {
    int a = 0x48;
    int b = 0x65;
    int c = 0x6C;
    int d = 0x6C;
    int e = 0x6F;
    int f = 0x20;
    int g = 0x77;
    int h = 0x6F;
    int i = 0x72;
    int j = 0x6C;
    int k = 0x64;
    int l = 0x2E;
    int m = 0x0A;

    /*
      A pointer is a variable that stores a memory address.
      The "&" address of operator gives us the address of a variable.
      The * in the declaration (int *o) between type and name means “o is a pointer to an int”.
      So each pointer below stores the address of one of the integers above.
   */    

    int *o = &a;
    int *p = &b;
    int *q = &c;
    int *r = &d;
    int *s = &e;
    int *t = &f;
    int *u = &g;
    int *v = &h;
    int *w = &i;
    int *x = &j;
    int *y = &k;
    int *z = &l;
    int *aa = &m;
    
    /*
      The printf statement uses %c prints the integer as a character.
      The astrerisk before the pointer names dereferences the pointers to get the integer values.
      Putting them together, we print each character of the message by
      dereferencing each pointer.
   */
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",*o,*p,*q,*r,*s,*t,*u,*v,*w,*x,*y,*z,*aa);

return 0;
}





#include<stdio.h>

#define swap(t,x,y) { t _z; \
             _z = x;\
              x = y;\
              y = _z; }

int main(void)
{
    char x, y;
    x = 'a';
    y = 'b';
    printf("Before swap: x = %c   y = %c\n", x, y);
    swap(char, x, y);
    printf("After swap:  x = %c   y = %c\n", x, y);
}
#include <stdio.h>
int main(){
    int *pc, c;
    c = 22;
    printf("Adress of c: %p\n", &c);
    printf("Value of c: %d\n\n ", c);

    pc = &c;
    printf("Address of c: %p\n", pc);
    printf("Value of pc %d\n\n", *pc);

    c = 11;
    printf("Address of c: %p\n", pc);
    printf("Value of pc %d\n\n", *pc);

    *pc = c;
     printf("Address 2 of c: %p\n", pc);
    printf("Value 2 of pc %d\n\n", *pc);

    *pc = 55;
     printf("Adress of c: %p\n", &c);
    printf("Value of c: %d\n\n ", c);
}
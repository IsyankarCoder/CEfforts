#include<stdio.h>

struct person   
{
    int age;
    float weight;
};

typedef struct person2{
    int age;
    float weight;
} personNew;

int main(){
    struct person p1;
    p1.age = 55;
    p1.weight = 52;

    personNew p2;
    p2.age = 35;
    p2.weight = 10;

    printf("yaş %d\n", p2.age);
    printf("Agırlık giriniz : ");
    scanf("%f", &p2.weight);
}

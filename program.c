#include <stdio.h>
#include <stdlib.h>
int A = 1, B = 2, C = 3;
void f2();
void f3();
void f1(){
    int a = 10;
    printf("&a @ f1() = %p\n",&a);
    f2();
}

void f2(){
    int b = 20;
    printf("&b @ f2() = %p\n",&b);
    f3();
}

void f3(){
    int c = 30;
    A = 9,B = 8,C = 7;
    printf("&c @ f3() = %p\n",&c);
    printf("&A = %p, &B = %p, &C = %p <--- print in function\n",&A,&B,&C);
}

int main(){
    int *X = malloc(sizeof (int));
    int *Y = malloc(sizeof (int));
    int *Z = malloc(sizeof (int));
    int *W = malloc(sizeof (int));
    int *V = malloc(sizeof (int));
    printf("Results of addresses: \n");
    printf("&A = %p, &B = %p, &C = %p <--- print in main\n",&A,&B,&C);
    printf("X = %p, Y = %p, Z = %p, W = %p, V = %p\n",X,Y,Z,W,V);
    f1();
    free(V);
    free(W);
    free(Z);
    free(Y);
    free(X);
    return 0;
}
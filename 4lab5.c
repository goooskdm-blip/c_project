
#include <stdio.h>
void volt(float I , float R);

void main(void) {
    float I,R;
    printf("current :");
    scanf("%f", &I);
    printf("ohm :");
    scanf("%f", &R);
    volt(I,R);
}

void volt(float I , float R) {
    float v = I * R ;
    printf("volt >> %f", v);
}

#include <stdio.h>
void circle(float r);

void main(void) {
    float r;
    printf("enter radius :");
    scanf("%f", &r);
    circle(r);
}

void circle(float r) {
    float circle = 3.14 *r* r;
    printf("circle >> %f", circle);
}
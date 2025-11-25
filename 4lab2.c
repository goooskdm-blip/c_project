#include <stdio.h>
void triangle(int b,int h);

void main(void){

    triangle(3,5);

}

void triangle(int b, int h){

    float ans;
    ans =0.5*b*h;
    printf("ans = %.2f  " , ans);
}
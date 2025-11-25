#include <stdio.h>
void triangle(int b,int h);

void main(void){
    int b , h ;

    printf("enter base :");
    scanf("%d" , &b);
     printf("enter hight :");
    scanf("%d" , &h);
    triangle (b,h);


}

void triangle(int b, int h){

    float ans;
    ans =0.5*b*h;
    printf("ans = %.2f  " , ans);
}
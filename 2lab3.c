#include <stdio.h>

// หาพื้นที่ สามเหลี่ยม
// 1/2 * Base * Hight

int main( void){

    float w ; // ค่าฐาน
    float h ; // ค่าสูง

    printf( "Enter mass >> ");
    scanf( "%f" , &w );

    printf( "Enter Hight >> ");
    scanf( "%f" , &h );

    h=h/100; 

    float BMI = w/(h*h) ; // สูตร

    printf( "mass = %.2f \nHigh = %.2f \nBMI = %.2f" , w , h ,BMI ) ;
    
    if (BMI >=30){

    printf("you fukin fat ass");
    }else if (BMI >=25){
        printf("fattt");
    }
    else if (BMI >=20){
        printf("almost fat");
    }
    else if (BMI >=18.5){
        printf("normal");
    }
    else printf("you flipin pice of bone");


}
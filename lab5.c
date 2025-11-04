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

    float A = w/(h*h) ; // สูตร

    printf( "mass = %.2f \nHigh = %.2f \nBMI = %.2f" , w , h ,A ) ;

}
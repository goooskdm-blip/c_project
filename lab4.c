#include <stdio.h>

// หาพื้นที่ สามเหลี่ยม
// 1/2 * Base * Hight

int main( void){

    int b ; // ค่าฐาน
    int h ; // ค่าสูง

    printf( "Enter Base >> ");
    scanf( "%d" , &b );

    printf( "Enter Hight >> ");
    scanf( "%d" , &h );

    float A = b*h/2 ; // สูตร

    printf( "Base = %d \nHigh = %d \nArea = %.2f" , b , h ,A ) ;

}
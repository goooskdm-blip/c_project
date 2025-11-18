#include <stdio.h>

int main (){
 
     int a = 0 ;

     int b = 1;
     
     int c = 12;

    printf("=============================== \n ");

    printf("enter number :");

    scanf( "%d" , &a);

    while ( b < c+1)
    {
        printf(" %d X  %d = %d \n", a , b , a*b);
        
        b+=1;
      
    }

      printf("===============================");
}






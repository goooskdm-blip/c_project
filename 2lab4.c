#include <stdio.h>

int main( void){


char g ;

printf("enter gender: ");
scanf ("%c",&g);

switch (g){

case 'M': printf ("male");

break;
case 'W': printf ("woman");
break;

default:
printf("gay");
}


}
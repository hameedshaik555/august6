
#include <stdio.h>
int main()
{
int number1 = 4;
short int number2 = 5;
unsigned short int number3 = 6;
long int number4 = 7;
unsigned long int number5 = 80;
unsigned long long int number6 = 90;
char character1 ='H';
signed char character2 ='A';
unsigned char character3 ='B';
float digit1 =20.00;
double digit2 = 2.141789;
long double digit3 = 3.414213;
 

printf("The size of short int data type %d is: %lu bytes. \n", number1,sizeof(number1));
printf("The size of short int data type %d is: %lu bytes.\n", number2,sizeof(number2));
printf("The size of unsigned short int data type %d is: %lu bytes.\n", number3,sizeof(number3));
printf("The size of long int data type %ld is: %lu bytes.\n", number4,sizeof(number4));
printf("The size of unsigned long int data type %ld is: %lu bytes.\n", number5,sizeof(number5));
printf("The size of unsigned long long int data type %lld is: %lu bytes.\n", number6,sizeof(number6));
printf("The size of char %c is: %lu byte.\n", character1,sizeof(character1));
printf("The size of signed char %c is: %lu byte.\n", character2,sizeof(character2));
printf("The size of unsigned char %c is: %lu byte.\n", character3,sizeof(character3));
printf("The size of float data type %f is: %ld bytes.\n", digit1,sizeof(digit1));
printf("The size of double data type %lf is: %ld bytes.\n", digit2,sizeof(digit2));
printf("The size of long double data type %Lf is: %ld bytes.\n", digit3,sizeof(digit3));
return 0;    
}

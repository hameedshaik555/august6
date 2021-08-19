#include<stdio.h> 
 int main()
{
 
   int r;
   float PI = 3.14, area, circle;
 
   printf("\nEnter radius of circle: "); 
   scanf("%d", &r);
 
     area = PI * r * r; //entering the formula 
   printf("\nArea of circle : %f ", area);
 
     circle = 2 * PI * r; // 2*3.14*r
   printf("\nCircumference : %f ", circle);
 
   return (0);

}

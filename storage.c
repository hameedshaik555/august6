  
storage class specifiers : A storage class represents the visibility and a location of a 
variable. It tells from what part of code we can access a variable.
1. auto : The variables defined using auto storage class are called as local Variables. 
Auto stands for automatic storage class. The Scope of auto variable is limited with 
particular block. Once the control goes out of the block, the access is destroyed.
Intial / default : Garbage value Storage Space : CPU memory
Scope : Local
program:#include <stdio.h>


    void fun()
    {
        auto int a=10;
        ++a;
        printf("%d\t",a);
    }
    
void main()
{
    fun();
    fun();
    fun();
}
output:11 11 11

2. extern : It stands for External storage class. Keyword extern is used to declaring a 
global variable or function in another file to provide the refrence of variable or 
function which have been already defined in the orginal file.
Intial / default : Zero Storage Space : CPU memory
Scope : Global
First file : main.c
#include<stdio.h>
extern i;

3. static : The static variable are used within function/file as local static variables. 
They can also be used as a global variable.
Intial / default : Zero Storage Space : CPU memory
Scope : Local
#include <stdio.h>


    void fun()
    {
        static int a=10;
        ++a;
        printf("%d\t",a);
    }
    
void main()
{
    fun();
    fun();
    fun();
}
output: 11 12 13

4. register : This storage class is used to store local variables within functions or 
blocks in CPU register instead of RAM to have quick access to these variables.
Intial / default : Garbage Storage Space : Register
Scope : Local
#include<stdio.h>
int main()
{
register int i;
for(i=1;i<=10;i++)
printf(“%d” , i);
return 0;
}

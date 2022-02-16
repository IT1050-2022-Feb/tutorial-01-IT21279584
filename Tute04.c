/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//declare functions
int minimum( int num1, int num2 );
int maximum( int num1, int num2 );
int multiply( int num1, int num2 );

int main() {
   //declare variables
   int no1, no2;
   
   printf("Enter a value for no 1 : ");//prompt
   scanf("%d", &no1);//read a number 1
   
   printf("Enter a value for no 2 : ");//prompt
   scanf("%d", &no2);//read a number2
   
   printf("%d ", minimum(no1, no2));//calling function
   printf("%d ", maximum(no1, no2));//calling function
   printf("%d ", multiply(no1, no2));//calling function
   
   return 0;
}//end of main function
//function implementation
int minimum( int num1, int num2 )
{
    if ( num1 > num2 )
    {
   	return num2;
   }
   else
   {
   	return num1;
   }
}
int maximum( int num1, int num2 )
{
   if ( num1 < num2 )
   {
   	return num2;
   }
   else
   {
   	return num1;
   }
}
int multiply( int num1, int num2 )
{
   return num1 * num2;
}

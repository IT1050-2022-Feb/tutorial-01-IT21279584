/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
  
   //declare the variables
   int i;
   float marks;
   float avg;
   float total = 0;
   
   for ( i = 1; i <= 2; i++ )
   {
      printf( "Enter subject %d Marks : ", i);//prompt
      scanf( "%f", &marks);//read a marks
      
      total = total + marks;//calculate the total of two subject
   }
   
   avg = total / 2;
   
   printf( "Average of two Marks : %.2f", avg );//prompt
      

  return 0;
}//end of main function


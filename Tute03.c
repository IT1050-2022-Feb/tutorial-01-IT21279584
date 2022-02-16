/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  //declare variables
  int i;
  int n;
  int sum = 0;

    /* Input upper limit from user */
    printf( "Enter upper limit: " );
    scanf( "%d", &n );

    /* Find sum of all numbers */
    for( i = 1; i <= n; i++ )
    {
        sum += i;
    }

    printf( "Sum of numbers = %d", sum );//Display sum of numbers
  
  return 0;
}


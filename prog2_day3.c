/* Q6: Write a program to swap two numbers using a third variable.
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
int main()
{
    int first, second, third; 
	printf("enter first number: ");
	scanf("%d", &first);
	printf("second number: ");
	scanf("%d", &second);
	
	
	third = first;
	first = second;
	second = third;
	
	printf("first number = %d\n", first);
	printf("second number = %d", second);
	     return 0;
	        
	


} 

/*

enter first number: 1
second number: 3
first number = 3
second number = 1

*/

	
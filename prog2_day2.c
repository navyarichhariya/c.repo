/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
int main()
{
      float radius,area,circumference;
	  printf("enter radius:  ");
	  scanf("%f", &radius);
	  area= 3.14*radius*radius;
	  circumference= 2*3.14*radius;
	  
	  printf("area = %.2f\n", area);
	  printf("circumference = %.2f", circumference);
	  
	  return 0;
	  
}

/*
enter radius:  5
area = 78.50
circumference = 31.40
*/
	 
	  
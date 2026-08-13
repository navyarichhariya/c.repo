/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
    float length,width,area,perimeter;
    printf("Enter length = " );
    scanf("%f", &length);
    printf("Enter width = ");
    scanf("%f", &width);
    area=length*width;
    perimeter=2*(length+width);
    
    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}

/* 
Enter length = 5
Enter width = 10
Area = 50.00
Perimeter = 30.00
*/

/* 
Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, swapped;
    int firstdigit, lastdigit, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastdigit  = num % 10; 

    digits     = (int) log10(num); 

    firstdigit = (int) (num / pow(10, digits));

    swapped  = lastdigit;
    swapped *= (int) round(pow(10, digits));
    swapped += num % ((int)round(pow(10, digits)));
    swapped -= lastdigit;
    swapped += firstdigit;

    printf("Original number = %d", num);
    printf("Number after swapping first and last digit: %d", swappeds);

    return 0;
	
	
	
}

/*
Enter a number: 1486
Original number = 1486Number after swapping first and last digit: 6481
*/
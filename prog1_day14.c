/*
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, i, odd, sum = 0;

 
    printf("Enter the value of n ): ");
    scanf("%d", &n);

    printf("The first %d odd numbers are: ", n);

 
    for (i = 1; i <= n; i++) {
     
        odd = 2 * i - 1; 
        
        printf("%d ", odd);
        
      
        sum += odd; 
    }

    printf("The sum of the first %d odd numbers is: %d", n, sum);

    return 0;
}


/*
Enter the value of n ): 15
The first 15 odd numbers are: 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 The sum of the first 15 odd numbers is: 225
*/

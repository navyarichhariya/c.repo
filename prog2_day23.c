/*
Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****



*/

#include <stdio.h>

int main() {
    int total_groups = 5;
    int stars_per_group = 5;

    for (int i = 0; i < total_groups; i++) {
 
        for (int j = 0; j < stars_per_group; j++) {
            printf("*");
      
    }

    printf("\n");
	}

    return 0;
}


/*
*****
*****
*****
*****
*****
*/

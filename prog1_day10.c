/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main() {
    float side1, side2, side3;
    printf("enter side 1: ");
	scanf("%f", &side1);
	printf("enter side 2: ");
	scanf("%f", &side2);
	printf("enter side 3: ");
	scanf("%f", &side3); 

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
    
        if (side1 == side2 && side2 == side3) {
            
            printf("The triangle is Equilateral.\n");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
           
            printf("The triangle is Isosceles.\n");
        } 
        else {
          
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}


/*
enter side 1: 2
enter side 2: 4
enter side 3: 4
The triangle is Isosceles.
*/

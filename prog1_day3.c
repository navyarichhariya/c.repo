/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/


#include<stdio.h>
int main()
{
   float C,F;
    printf("enter temperature in celsius = ");
    scanf("%f",&C);
    F=(C*9/5) + 32;
    printf("Temperature in Fahrenhiet = %.2f\n",F);

    return 0;
}

/*
enter temperature in celsius = 20
Temperature in Fahrenhiet = 68.00
*/ 

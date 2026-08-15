/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/


#include<stdio.h> 
#include<math.h>


  int main()  
{
 float p, r, t, si, ci;
    
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    
    printf("Enter Rate of interest: ");
    scanf("%f", &r);
    
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    
    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;
    
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    
    return 0;
}


/*
Enter Principal amount: 100
Enter Rate of interest: 50
Enter Time (in years): 5
Simple Interest = 250.00
Compound Interest = 659.38

*/
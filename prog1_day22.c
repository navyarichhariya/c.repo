/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int i, original, num, lastdigit, sum;
    long fact;


    printf("Enter any number : ");
    scanf("%d", &num);

    original = num;

    sum = 0;

   
    while(num > 0)
    {

    
        lastdigit = num % 10;

     
        fact = 1;
        for(i=1; i<=lastdigit; i++)
        {
            fact = fact * i;
        }

       
        sum = sum + fact;

        num = num / 10;
    }

  
    if(sum == original)
    {
        printf("%d is STRONG NUMBER", original);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", original);
    }

    return 0;
}


/*
Enter any number : 571
571 is NOT STRONG NUMBER
*/ 
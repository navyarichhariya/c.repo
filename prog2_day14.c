/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/


#include <stdio.h>

int main()
{
    int i, n;
  

    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

  
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;

} 

/*
Print all even numbers till: 30
Even numbers from 1 to 30 are:
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
/* 
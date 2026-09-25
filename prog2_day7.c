/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The character '%c' is a vowel.\n", ch);
        } 
        else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    } 
    else {
        printf("Error: '%c' is not a valid alphabetic letter.\n", ch);
    }

    return 0;
}


/*
Enter a character: b
The character 'b' is a consonant.
*/

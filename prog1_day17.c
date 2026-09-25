/* WAP to find the total number of armstrong numbers in a range */

#include<stdio.h>
#include<math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int num) {
    
    int originalNum = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int remainder = num % 10;
        sum += (pow(remainder, digits)); 
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end, count = 0;

    printf("Enter the first number of the range: ");
    scanf("%d", &start);
    printf("Enter the last number of the range: ");
    scanf("%d", &end);

   

    printf("Armstrong numbers in the range [%d, %d] are:", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("Total number of Armstrong numbers found: %d", count);

    return 0;
}
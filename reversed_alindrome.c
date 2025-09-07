#include <stdio.h>
void main() {
    int num, temp, rev, rem;

    printf("Enter the four digit number\n");
    scanf("%d", &num);

    temp = num;
    rev = 0;

    while (num != 0) {
        rem = num % 10;
        num = num / 10;
        rev = (rev * 10) + rem;
    }
    printf("%d after reversing = %d\n", temp, rev);
    if (temp == rev) {
        printf("%d is a palindrome number\n", temp);
    } else {
        printf("%d is not a palindrome number\n", temp);
    }
}


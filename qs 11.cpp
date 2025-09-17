#include <stdio.h>
int main() 
   {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
	if (number >= 100 && number <= 999) {
        if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
        } else {
            printf("%d is an odd number.\n", number);
        }
    } 
       return 0;
}
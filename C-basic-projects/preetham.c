#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1;
    double num2;
    char op;


    
        printf("enter number 1 = ");
        scanf("%lf", &num1);
        printf("\nenter operation = ");
        scanf(" %c", &op);
        printf("\nenter number 2 = ");
        scanf("%lf", &num2);
        printf("\nResult = ");
        if (op == '+') {
            printf("%f\n", num1 + num2);
        } else if (op == '-') {
            printf("%f\n", num1 - num2);
        } else if (op == '*') {
            printf("%f\n", num1 * num2);
        } else if (op == '/') {
            if (num2 == 0) {
                printf("divisor is zero\n");
            } else {
                printf("%f\n", num1 / num2);
            }
        } else {
            printf("invalid operator\n");
        }

        return 0;
}







     


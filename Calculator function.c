#include <stdio.h>
#include <math.h>
int main() {
    char selector;
    float num1;
    float num2;
    float ans;
    int repeat;
    do {
        printf("Write the equation in this form num1 operator num2\n");
        printf("Please noted that for multiple please use * instead x\n");
        scanf("%f %c %f",&num1,&selector,&num2);
        switch (selector) {
            case '+':
                ans=num1+num2;
                break;
            case '-':
                ans=num1-num2;
                break;
            case '*':
                ans=num1*num2;
                break;
            case '/':
                ans=num1/num2;
                break;
            case '^':
                ans=pow(num1,num2);
                break;
            case '%':
                ans=num1%num2;
                break;
            
            default:
                printf("Please try again");
        }
        printf("The answer for equation = %f\n",ans);
        printf("Do you do start with new equation 1 for continue , 0 for no\n");
        scanf("%d",&repeat);

    } while (repeat == 1);
}

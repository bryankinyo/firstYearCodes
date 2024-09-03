#include <stdio.h>

int main(){

int num=0, a=0, b=0, sum=0, difference=0, product=0;
float quotient;

printf("Enter number between 1 and 4:");
scanf("%d", &num);

    if (num==1){
        printf("Enter value for a:\n");
        scanf("%d", &a);
        printf("Enter value for b:\n");
        scanf("%d", &b);
    sum=a+b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    } else if (num==2){
        printf("Enter value for a:\n");
        scanf("%d", &a);
        printf("Enter value for b:\n");
        scanf("%d", &b);
    difference=a-b;
    printf("The difference of %d and %d is %d", a, b, difference);
    } else if (num==3){
        printf("Enter value for a:\n");
        scanf("%d", &a);
        printf("Enter value for b:\n");
        scanf("%d", &b);
    product=a*b;
    printf("The product of %d and %d is %d", a, b, product);
    } else if (num==4){
        printf("Enter value for a:\n");
        scanf("%d", &a);
        printf("Enter value for b:\n");
        scanf("%d", &b);
            if (b==0){
                printf("b should not be 0");
            } else {quotient=(float) a/b;
        printf("The quotient of %d and %d is %.2f\n", a, b, quotient);
    } 
    } else {
        printf("Invalid Input");
 }
 return 0;
}
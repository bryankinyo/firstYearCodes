#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int choice = 0;
    int a, b, c, d;
    int sum, difference, product;
    float quotient;
   
    printf("*********************\n");
    printf("*   MAIN MENU       *\n");
    printf("* 1. ADDITION       *\n");
    printf("* 2. SUBTRACTION    *\n");
    printf("* 3. MULTIPLICATION *\n");
    printf("* 4. DIVISION       *\n");
    printf("* 5. EXIT           *\n");
    printf("*********************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                system("cls");
                printf("Welcome to Addition\n\n");
                
                printf("Enter value for a: ");
                scanf("%d", &a);

                printf("Enter value for b: ");
                scanf("%d", &b);

                sum = a + b;

                printf("The sum of %d and %d is %d", a, b, sum);
                getch();
                break;
                
            case 2:
                system("cls");
                printf("Welcome to Subtraction\n\n");
                
                printf("Enter value for a: ");
                scanf("%d", &a);

                printf("Enter value for b: ");
                scanf("%d", &b);

                printf("Enter value for c: ");
                scanf("%d", &b);

                difference = a - b - c;

                printf("The difference of %d, %d, and %d is %d\n", a, b, c, difference);
                getch();
                break;

            case 3:
                system("cls");
                printf("Welcome to Multiplication\n\n");
                
                printf("Enter value for a: ");
                scanf("%d", &a);

                printf("Enter value for b: ");
                scanf("%d", &b);

                printf("Enter value for c: ");
                scanf("%d", &c);

                printf("Enter value for d: ");
                scanf("%d", &d);

                product = a * b * c * d;
                printf("The product of %d,%d,%d, and %d is %d", a, b, c, d, product);
                getch();
                break;

            case 4:
                system("cls");
                printf("Welcome to Division\n\n");
                
                printf("Enter value for a: ");
                scanf("%d", &a);

                printf("Enter value for b: ");
                scanf("%d", &b);
                
                if (b != 0) {
                    quotient = (float)a / b;
                    printf("The quotient of %d and %d is %.2f\n", a, b, quotient);
                    getch();
                } else{
                    printf("Error: Division by zero is not allowed.\n");
                    printf("Enter value for b: ");
                    scanf("%d", &b);
                    quotient = (float)a / b;
                    printf("The quotient of %d and %d is %.2f\n", a, b, quotient);
                    getch();
                } 
                break;
            
            case 5:
                system("cls");
                printf("Thank you! Come again!\n");
                break;

        default:
                system("cls");
                printf("Invalid Input");
                getch();
            break;
        }

        system("cls");
        printf("*********************\n");
        printf("*   MAIN MENU       *\n");
        printf("* 1. ADDITION       *\n");
        printf("* 2. SUBTRACTION    *\n");
        printf("* 3. MULTIPLICATION *\n");
        printf("* 4. DIVISION       *\n");
        printf("* 5. EXIT           *\n");
        printf("*********************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
    }

    printf("Thank you! Come Again!");
    getch();
}
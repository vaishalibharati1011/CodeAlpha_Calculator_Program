#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;
    char again;

    do
    {
        printf("\n=================================\n");
        printf("      SIMPLE CALCULATOR\n");
        printf("=================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("=================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5)
        {
            printf("Thank you for using the calculator!\n");
            break;
        }

        if(choice < 1 || choice > 5)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if(num2 == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                else
                {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                break;
        }

        printf("\nDo you want to perform another calculation? (Y/N): ");
        scanf(" %c", &again);

    } while(again == 'Y' || again == 'y');

    printf("\nProgram terminated successfully.\n");

    return 0;
}

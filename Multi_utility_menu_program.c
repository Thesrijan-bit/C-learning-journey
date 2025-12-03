#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\nMenu\n");
        printf("1. Calculator\n");
        printf("2. Even or Odd\n");
        printf("3. Grade Finder\n");
        printf("4. Day Name\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            int a, b;
            char op;

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Enter operator (+ - * /): ");
            scanf(" %c", &op);

            switch (op) {
                case '+': printf("Result = %d\n", a + b); break;
                case '-': printf("Result = %d\n", a - b); break;
                case '*': printf("Result = %d\n", a * b); break;
                case '/':
                    if (b != 0) printf("Result = %d\n", a / b);
                    else printf("Cannot divide by zero\n");
                    break;
                default:
                    printf("Invalid operator\n");
            }
            break;
        }

        case 2: {
            int n;
            printf("Enter number: ");
            scanf("%d", &n);

            switch (n % 2) {
                case 0: printf("Even\n"); break;
                case 1: printf("Odd\n"); break;
            }
            break;
        }

        case 3: {
            int marks;
            printf("Enter marks: ");
            scanf("%d", &marks);

            switch (marks / 10) {
                case 10:
                case 9: printf("Grade A\n"); break;
                case 8: printf("Grade B\n"); break;
                case 7: printf("Grade C\n"); break;
                case 6: printf("Grade D\n"); break;
                default: printf("Grade F\n");
            }
            break;
        }

        case 4: {
            int d;
            printf("Enter number (1 to 7): ");
            scanf("%d", &d);

            switch (d) {
                case 1: printf("Monday\n"); break;
                case 2: printf("Tuesday\n"); break;
                case 3: printf("Wednesday\n"); break;
                case 4: printf("Thursday\n"); break;
                case 5: printf("Friday\n"); break;
                case 6: printf("Saturday\n"); break;
                case 7: printf("Sunday\n"); break;
                default: printf("Invalid day\n");
            }
            break;
        }

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

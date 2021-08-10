#include <stdio.h>
#include <conio.h>
unsigned long amount, deposit, withdraw;
int choice, pin, i,pass;
char transaction = 'y';
void main()
{
    printf("ENTER Amount: ");
    scanf("%lu", &amount);
    while (pin <= 9999)
    {
        printf("ENTER YOUR PIN NUMBER: ");
        scanf("%d", &pin);
        break;        
    }
    do
    {
        printf(" Welcome to ATM Service \n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE =Rs.%lu ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT: ");
            scanf("%lu", &withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw > (amount - 1000))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT YOUR CASH");
                printf("\n YOUR CURRENT BALANCE =RS.%lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT: ");
            scanf("%lu", &deposit);
            amount = amount + deposit;
            printf(" YOUR BALANCE =RS.%lu", amount);
            break;
        case 4:
            printf("\n THANK YOU USING OUR ATM SERVICES");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            i = 1;
    } while (!i);
    printf("\n\n THANKS FOR USING OUR ATM SERVICE");
}
#include<stdio.h>

int main()
{
    int num;
    int cash;
    int balance = 1000; 

    do
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        
        printf("Choose an option: ");
        scanf("%d",&num);
        
     
        switch(num)
        {
            case 1:
                printf("Current balance : %d baht\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit :");
                scanf("%d", &cash);
                if (cash > 0) 
                {
                    balance = balance + cash; // หรือ balance += cash;
                   
                } else {
                    printf("Invalid amount. Deposit failed.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &cash);
                if (cash > 0 && cash <= balance) {
                    balance = balance - cash; // หรือ balance -= cash;
                    printf("Withdrawal successful.\n");
                } else {
                    printf("Invalid amount or insufficient balance. Withdrawal failed.\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
        
    }
    while(num != 4); 
    
    return 0;       
}
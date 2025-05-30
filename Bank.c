#include<stdio.h>
#include<string.h>
void check_balance();
void deposit_balance();
void withdraw_balance();


int account_balance=0;

int main()
{
  int option;   
do
{

   printf("1.Check balance\n");
   printf("2.Deposit\n");
   printf("3.Withdraw\n");
   printf("4.Exit\n");
   printf("Choose menu:");
   scanf("%d",&option);
   if(option<1 || option>4)
   {
    printf("Wrong input.Try again...");
    return 1;
   }
   switch (option)
   {
   case 1:
    check_balance();
    break;

    case 2:
    deposit_balance();
    break;

    case 3:
    withdraw_balance();
    break;

     case 4:
    printf("Exiting....Please connect with us.Thank you.\n");
    break;
   
   default:
   printf("Wrong input\n");
    break;
   }
}
while(option!=4);
}
   
void check_balance()
{
    printf("Your account balance is : %d BDT.Thank you.\n",account_balance);
}


void deposit_balance()
{
    int add;
    printf("Enter your amount:");
    scanf("%d",&add);
    if(add<1000)
    {
        printf("Please select at least amount of 1000 BDT.Thank you.\n");
        
        return;
    }
    
    account_balance+=add;
    printf("Your deposit is successful.Please stay with us.Thank you.\n");
    
    
}

void withdraw_balance()
{
    int withdraw;
    printf("Enter your withdraw amount:");
    scanf("%d",&withdraw);
    if(withdraw>account_balance || withdraw<500)
    {
        printf("Insufficient fund.Please deposit first.Thank you.\n");
        return;
    }
    account_balance-=withdraw;
    printf("Your withdraw is successful.Please stay with us.Thank you.\n");
}
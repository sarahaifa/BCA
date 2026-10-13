#include<stdio.h>
int main(){
    int i;
    int option,useraccountno;
    int accountno=1000;
    float amount;
    float balance=500;
    do
    {
          printf("----welcome to my bank----\n");
          printf("1.  deposit\n");
          printf("2. withdraw\n");
          printf("3. account view\n");
          printf("exit\n");
          printf("enter your option");
          scanf("%d",&option);
          if(option==1){
               printf("enter account number\n");
               scanf("%d",&useraccountno);
               if(useraccountno==1000){
                    printf("valid account\n");
                    printf("enter deposit amount\n");
                    scanf("%f",&amount);
                    balance=balance + amount;
                    printf("balance: %f\n",balance);
                    printf("account updated...");
               }else{
                    printf("invalid accountno"); 
               } 
          }  
          if(option==2){
               printf("enter account number\n");
               scanf("%d",&accountno);
               if(accountno==1000){
                    printf("valid account\n");
                    printf("enter amount");
                    scanf("%f",&amount);
                    if (amount<=500){
                         balance=balance-amount;
                         printf("balance:%f\n",balance);
                         printf("withdraw successfull");
                    }else{
                         printf("insufficient balance");
                    }
               }else{
                         printf("invalid account");
               } 
          }  
          if(option==3){
               printf("accountno%d\n",&accountno);
               printf("balance%d",&balance);
                   
          }
          if(option==4){
               printf("exit");
          
          }
     }while(option !=4);
     return 0;
     

}


#include<stdio.h>
int main(){
    int choice;
    float num1,num2,result;
    int i=1;
    do{
    
        printf("----welcome to my calculator-----\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multification\n");
        printf("4. division\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
    
            printf(" enter firstnumber:");
            scanf("%f",&num1);
            printf("Enter the secondnumber");
            scanf("%f",&num2);
            result=num1+num2;
            printf("The sum is:%.0f\n",result);
        }

        if(choice==2){
        
            printf("enter the first number:");
            scanf("%f",&num1);
            printf("enter the secondnumber");
            scanf("%f",&num2);
            result=num1-num2;
            printf("The defference is:%.0f\n",result);

        } 
        if(choice==3){
            printf("enter the firstnumber:");
            scanf("%f",&num1);
            printf("enter the secondnumber");
            scanf("%f",&num2);
            result=num1*num2;
            printf("the product is:%.0f\n",result);
        }
        if(choice==4){
        
            printf("enter the firstnumber");
            scanf("%f",&num1);
            printf("enter the secondnumber");
            scanf("%f",&num2);
            result=num1/num2;
            printf("the quotient is:%.0f\n",result);  
        }
        if (choice==5){
            printf("program is terminated");
            printf("------end-------");
        }

      
      
      

        
        
    }while (i!=5);
    return 0;
}    
    

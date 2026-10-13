#include<stdio.h>
int main(){
    int n,sum=0;
    printf("C pgm to get the sum of numbers from 5 to N");
    printf("enter N value");
    scanf("%d",&n);
    if (n>5){
         for(int i=5;i<=n;i++){
            sum+=i;
         }
         printf("sum of numbers from 5 to %d is:%d",n,sum);
    
    }else{
        printf("please enter n greater than 5\n");
    
    }
}
    

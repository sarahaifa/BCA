#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("% d",j);
        }
        printf("\n");
    }
     for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("% d",j);
        }
        printf("\n");
    }
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("% d",j);
        }
        printf("\n");
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(i==5)
            {
                if(j==3)
                {
                    printf(" ");
                }
            }
                else
                {
                    printf("% d",j);
                }
                
                

            }
            
        }
        printf("\n");
    
    }

    





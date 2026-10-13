#include<stdio.h>
int main(){
    int i,newdata,indexvalue;
    int array[4];

    
    for(int i=0;i<4;i++){
        printf("enter %d element:",i+1);
        scanf("%d",& array[i]);
      
    }

    printf("enter the new element:");
    scanf("%d",&newdata);

    printf("enter indexvalue:");
    scanf("%d",& indexvalue);
    //insertion process to insert 'newdata' at index 'index'
    array[4]=array[5];
    array[3]=array[4];
    array[2]=newdata;
    for(int i=0;i<5;i++){ 
        printf("enter newdata[i]");
        scanf("%d",& newdata);
    }


    
    


}
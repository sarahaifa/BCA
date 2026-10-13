#include<stdio.h>

int main(){
    

    //char my_name[30]="sara haifa";
    //printf("enter your first name:");
    //scanf("%29s",& my_name);
    //printf("hello %s",my_name);


    char name[20];
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf(" %s",name);

    char word[20]="aifa";
    for(int i=0;word[i]!='\0';i++){
        printf("word[%d]=%c\n",i,word[i]);
    }
     
    return 0;

    


    



}
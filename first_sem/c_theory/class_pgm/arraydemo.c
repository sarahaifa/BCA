//pgm to store and display 5 subjects marks
#include<stdio.h>
int main(){
    int sub_marks[5]; 
    //storing data/array initialisation-array_name[index]=data/value;
    sub_marks[0]=80;     //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68; 
    sub_marks[3]=98; 
    sub_marks[4]=58;    //static array initialisation 
    //fetch first array element from 'sub_marks'
    printf("first subject marks:%d",sub_marks[0]);
    printf("first subject marks:%d",sub_marks[1]);
    printf("first subject marks:%d",sub_marks[2]);
    printf("first subject marks:%d",sub_marks[3]);
    printf("first subject marks:%d",sub_marks[4]);

    for(int i=0;i<5;i++){
        printf("enter the subject marks:,[int data]",i+1);
        scanf("%d",& sub_marks[i])
    }
   

}
#include<stdio.h>
int rollnumber;
float sub1,sub2,sub3,sub4,sub5;
float total,avg,cgpa;

void getstudentdata(){
    printf("enter rollnumber");
    scanf("%d",&rollnumber);
    printf("python marks");
    scanf("%f",&sub1);
    printf("c program marks");
    scanf("%f",&sub2);
    printf("maths");
    scanf("%f",&sub3);
    printf("cf marks");
    scanf("%f",&sub4);
    printf("dbms marks");
    scanf("%f",&sub5); 
}

void gettotal(){
    total=sub1+sub2+sub3+sub4+sub5;
    
}
void getaverage(){
    avg=total/5;
}
void getcgpa(){
    cgpa=avg/9.5;
}
void displaystudentdatadetails(){
    printf("total mark:%.2f\n",total);
    printf("average mark:%.2f\n",avg);
    printf("cgpa:%.2f\n",cgpa);
    
} 
int main(){
    getstudentdata();
    gettotal();
    getaverage();
    getcgpa();
    displaystudentdatadetails();

}


















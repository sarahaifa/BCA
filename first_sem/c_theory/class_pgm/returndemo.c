#include<stdio.h>
int rollnumber;
float sub1,sub2,sub3,sub4,sub5;
float avg,cgpa;
int total;

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

double gettotal(){
    total=sub1+sub2+sub3+sub4+sub5;
    printf("total_marks:%d\n",total);
    return total;
    
}
float getaverage(){
    avg=total/5;
    printf("average:%.2f\n",avg);
    return avg;
}
float getcgpa(){
    cgpa=avg/9.5;
    printf("CGPA:%.2f\n",cgpa);
    return cgpa;
}

int main(){
    getstudentdata();
    double total=gettotal();
    float avg=getaverage();
    float cgpa=getcgpa();
    

}


















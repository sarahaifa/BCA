#include<stdio.h>
#include<string.h>
struct software
{
    int id;
    char name[50];
    float salary;
    char email[50];
    char phone[10];
};
int main()
{    
    struct software first_emp;
    struct software second_emp;
    first_emp.id=101;
    strcpy(first_emp.name,"sara");
    first_emp.salary=85000;
    strcpy(first_emp.email,"sara@gmail.com");
    strcpy(first_emp.phone,"948567785");
    second_emp.id=102;
    strcpy(second_emp.name,"ram");
    second_emp.salary=80000;
    strcpy(second_emp.email,"ram@gmail.com");
    strcpy(second_emp.phone,"941567254");

}
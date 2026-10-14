#include<stdio.h>
int main(){
    int x=10;                //stores value 10
    int *p;                      //creating pointer
    p=&x;                       //initiallising

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
}
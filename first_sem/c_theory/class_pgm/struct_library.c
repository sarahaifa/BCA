#include<stdio.h>
#include<string.h>
struct library
{
    int library_id;
    char book_name[10];
    char author_name[10];
    char genre[10];
    int pg_no;
};
int main(){
    struct library firstmember;
    struct library seondmember;
    struct library thirdmember;
    struct library fourthmember;
    struct library fifthmember;
    firstmember.library_id=101;
    strcpy(firstmember.book_name,"harry_potter");
    strcpy(firstmember.author_name,"J.K rowling");
    strcpy(firstmember.genre,"fiction");
    firstmember.pg_no=199;
    seondmember.library_id=102;
    strcpy(seondmember.book_name,"my fault");
    strcpy(seondmember.author_name,"mercedes ron");
    strcpy(seondmember.genre,"romance");
    seondmember.pg_no=400;
    thirdmember.library_id=103;
    strcpy(thirdmember.book_name,"the housemaid");
    strcpy(thirdmember.author_name,"fm");
    strcpy(thirdmember.genre,"thriller");
    thirdmember.pg_no=611;
    fourthmember.library_id=104;
    strcpy(fourthmember.book_name,"vampire diaries");
    strcpy(fourthmember.author_name,"julie");
    strcpy(fourthmember.genre,"tragic");
    fourthmember.pg_no=750;
    fifthmember.library_id=102;
    strcpy(fifthmember.book_name,"your fault");
    strcpy(fifthmember.author_name,"mercedes ron");
    strcpy(fifthmember.genre,"romance");
    fifthmember.pg_no=100;


}
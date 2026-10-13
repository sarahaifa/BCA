#include<stdio.h>
    int elements[3];

   
    
int read_array_size(){
    int arraysize;         //local variable
    printf("enter array size:");
    scanf("%d",& arraysize);
    return arraysize;
 
}
int vallidate_array_size( int arraysize){
    while(arraysize<4){
        printf("the size is valid");
        scanf("%d",&arraysize);
    if(arraysize>4){ 
        printf("please re-try");
        scanf("%d",&arraysize);
    }

        return 1;
    }

int intiallise_array(int array[],int arraysize){
    int i;
    for(i=1;i<=arraysize;i++){
        if(i==1){
            printf("enter first array element");

        }
        else{
            printf("enter the %d element");
        }
        return 0
    }
}
void get_array_sum(){
    int total=0;
    total=total+arraysize;
    printf("the sum of array elements:");
}



int main(){
    int isvalid=1;
    int arraysize=0;
    int myarray[];
    //int arraysize=read_array_size();
    //vallidate_array_size(arraysize);
    while(isvalid==1){
        int arraysize=read_array_size();
        int isvalid=vallidate_array_size(arraysize);
        if(vallidated==1){
            printf("")
        break;
        }


    }

}


    

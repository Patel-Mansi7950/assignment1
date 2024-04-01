//accept 5 numbers from user and find those number factorial;
#include<stdio.h>
int main(){
int num,i;
    for (i=0;i=5;i++){
        printf("enters numbers:");
        scanf("%d",&num);
        int fact=1;
        for(int j=1;j<=num;j++){
            fact=fact*j;
        }
        printf("factorial of %d=%d\n",num,fact);
    }
}        

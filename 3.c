#include <stdio.h>

int main(){
    int sum=0;
    int n,i=4;
    printf("Enter upto how many index you want to sum: ");
    scanf("%d",&n);
    while(n!=0){
        sum+=i;
        i+=7;
        n--;
    }
    printf("Sum is: %d ",sum);
    return 0;
}

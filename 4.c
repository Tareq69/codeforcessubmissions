#include <stdio.h>

int main(){
    int sum=0;
    int n,i=2;
    printf("Enter upto how many index you want to sum: ");
    scanf("%d",&n);
    while(n!=0){
        sum+= i*i*i;
        i+=3;
        n--;
    }
    printf("Sum is: %d ",sum);
    return 0;
}

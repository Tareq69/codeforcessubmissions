#include <stdio.h>

int main(){
    int m,n;
    printf("Enter m and n: ");
    scanf("%d %d",&m,&n);
    for(int i=n-1;i>m;i--){
        if(i%2==0){
            printf("%d ",i);
        }
}
  return 0;
}

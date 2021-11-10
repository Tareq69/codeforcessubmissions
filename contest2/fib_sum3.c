
#include <stdio.h>

int sum_fib3(int n)
{
  int sum=0;
  int f[n + 2];
  int i;
  int n1,n2,n3;

    f[0] = 0;
    f[1] = 1;

    for(i = 2; i <= n; i++)
    {

        f[i] = f[i - 1] + f[i - 2];
    }
    for(i = 2; i <= n; i++)
    {

        f[i-1] = f[i] - f[i - 2];
    }
    for(i = 2; i <= n; i++)
    {

        f[i-2] = f[i] - f[i-1];
    }
    sum = f[n] + f[n-1] + f[n-2];
    return sum;
  }


int main()
{
  int res = 0;
  res = sum_fib3(5);
   printf("%d", res);
    return 0;
}

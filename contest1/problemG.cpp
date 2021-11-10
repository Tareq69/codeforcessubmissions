#include <cstdio>
#include <cmath>
const double PI = acos(-1.0);
int main()
{
    double ar;
    int t;
    scanf("%d",&t);
    while(t--){
      double l;
      scanf("%lf",&l);
      ar = PI * l * l / 25;
      printf("%.2lf %.2lf\n", ar, 3*l*l/5 - ar);
    }
}

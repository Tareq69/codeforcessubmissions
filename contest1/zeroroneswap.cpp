#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

  int num;
  int flag = 0;
  cin>>num;
  int arr[num];
  int sortarr[num];
  for(int i=0;i<num;i++){
    cin>>arr[i];
    sortarr[i] = arr[i];
    }

    sort(sortarr, sortarr+num);
    for (int i = 0; i < num; i++)
   {
       if (sortarr[i] != arr[i])
       flag++;
   }
   if (flag <= 2)
       cout << "YES" << endl;
   else
       cout << "NO" << endl;

   return 0;

 }

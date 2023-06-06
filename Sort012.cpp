#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   vector<int> v;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         v.push_back(arr[i]);
      }
   }
   for(int i=0;i<n;i++){
      if(arr[i]==1){
         v.push_back(arr[i]);
      }
   }
   for(int i=0;i<n;i++){
      if(arr[i]==2){
         v.push_back(arr[i]);
      }
   }
   for(int i=0;i<n;i++){
      arr[i]=v[i];
   }

}

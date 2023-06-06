#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   // sort(arr, arr+n);
   
   int z=0, o=0, t=0;
   for(int i=0; i<n; i++){
      if(arr[i]==0){
         z++;
      }
      else if(arr[i]==1){
         o++;
      }
      else{
         t++;
      }
   }
   int i=0;
   while(z--){
      arr[i]=0;
      i++;
   }
   while(o--){
      arr[i]=1;
      i++;
   }
   while(t--){
      arr[i]=2;
      i++;
   }

}

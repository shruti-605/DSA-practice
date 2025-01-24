#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   
   
   int lo=0;
   int mid=0;
   int ti=n-1;
   while(mid<=ti){
      if(arr[mid]==0){
         swap(arr[lo],arr[mid]);
         lo++;mid++;
      }else if(arr[mid]==1){
         mid++;
      }else{
         swap(arr[ti],arr[mid]);
         ti--;
      }
   }

}

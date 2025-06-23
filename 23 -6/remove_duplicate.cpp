//
// Created by kushg on 6/23/2025.
//
#include <bits/stdc++.h>
using namespace std;

//(on2)
// void remove_ele(int arr[], int index,int n){
//   for(int i=index;i<n + 1;i++){
//     arr[i]=arr[i + 1];
//   }
// }
//(on)
// void removeDuplicate(int arr[], int &n){
//       for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//           n--;
//           remove_ele(arr,i,n);
//         }
//       }
// }

//(on)
int removeDuplicates(int arr[], int n) {
  if (n == 0) return 0;
  int j = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[j]) {
      j++;
      arr[j] = arr[i];
    }
  }
  return j + 1;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  n = removeDuplicates(arr,n);
  cout<<"\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  return 0;
  }
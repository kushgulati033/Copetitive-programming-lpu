//
// Created by kushg on 6/23/2025.
//
#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n,int k){
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
  }
  int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
  }
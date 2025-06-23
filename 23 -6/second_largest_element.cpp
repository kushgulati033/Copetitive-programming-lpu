//
// Created by kushg on 6/23/2025.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int max=a[0];
  int second_max =0;
  for(int i=1;i<n;i++){
    if(a[i]>max){
      second_max=max;
      max=a[i];
    }
    // important condition
    if(a[i]<max && second_max<a[i]) {
      second_max=a[i];
    }
  }
  cout<<second_max<<endl;
  return 0;
 }


//
// Created by kushg on 6/23/2025.
//
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
//
// Return the maximum amount of water a container can store.
//
// Notice that you may not slant the container.
//
//
//
// Example 1:
//
//
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:
//
//   Input: height = [1,1]
//   Output: 1
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


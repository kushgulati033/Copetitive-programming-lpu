//
// Created by kushg on 6/23/2025.
//
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int res = nums[0];
    int total = 0;

    for (int i = 0;i < nums.size();i++) {
        if (total < 0) {
            total = 0;
        }

        total += nums[i];
        res = max(res, total);
    }

    return res;
}
int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  cout << maxSubArray(nums);
}
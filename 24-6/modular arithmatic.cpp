/* Dividend = divisor*quotient + remainder
*  r = D - d*q
* remainder is always positive
 * (a + b)%M = (a%M + b%M) % M
* (a*b)%M = (a%M * b%M)%M
* (a - b)%M = (a%M - b%M) % M
* (a^b%M) = ((a%M)^b)%M
* (a%M)%M = a%M
 */

// Given an array find i j pairs where (arr[i] + arr[j])%M = 0)

#include <bits/stdc++.h>
using namespace std;

int twoSum(vector<int>& nums, int target) {
    map<int,int>res_hash;
    vector <int> result;
    int i;
    int count = 0;
    for(i=0;i<nums.size();i++)
    {
        if(res_hash.find(target-nums[i])!=res_hash.end())
        {

            result.push_back(res_hash[target-nums[i]]);
            result.push_back(i);
            count++;
            return count;
        }
        else
            res_hash[nums[i]] = i;
    }
}

int main() {
  int n;
  cin>>n;
  vector<int> nums;
    int target;
    cin>>target;
  for(int i=0;i<n;i++){
    cin>>nums[i];
    nums[i] =  nums[i]%target;
    }
    int count = twoSum(nums, target);
    cout << count << endl;
    return 0;
}

//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
//You must write an algorithm that runs in O(n) time and without using the division operation.
//
//
//
//Example 1:
//
//Input: nums = [1,2,3,4]
//Output: [24,12,8,6]
//Example 2:
//
//Input: nums = [-1,1,0,-3,3]
//Output: [0,0,9,0,0]
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int flag = 0;
        for(int i = 0;i< nums.size();i++){
            if(nums[i] == 0){
                flag++;
            } else{
                total = total*nums[i];
            }
        }
        vector<int> ans;
        if(flag == 1){
            for(int j = 0;j<nums.size();j++){
                if(nums[j] != 0){
                    ans.push_back(0);
                }else{
                    ans.push_back(total);
                }
            }
        }else if(flag>1){
            for(int i = 0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        else{
            for(int i = 0;i<nums.size();i++){
                ans.push_back(total/nums[i]);
            }
        }
        return ans;
    }

};
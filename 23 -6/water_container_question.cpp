//
// Created by kushg on 6/23/2025.
//
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left<right){
            area = max(area,(right - left)*min(height[right],height[left]));
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return area;
    }
};
// wrong needs fixing
class Solution {
public:
    int search(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[mid- 1]&& nums[mid] > nums[mid +1]) {
              return mid;
              }

            if (nums[start] <= nums[mid]) {
                // Left half is sorted
               start = mid + 1;
            } else {
                // Right half is sorted
                end = mid - 1;
            }
        }

        return -1;
    }
};

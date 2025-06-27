// find logest palindrome in a string

class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        int n = s.length();
        int maxLen = 0;

        for (int centre = 0; centre < 2 * n - 1; centre++) {
            int left = centre / 2;
            int right = left + centre % 2;

            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > maxLen) {
                    maxLen = len;
                    result = s.substr(left, len);
                }
                left--;
                right++;
            }
        }

        return result;
    }
};

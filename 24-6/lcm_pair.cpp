//
// find no of pair(i,j) such that i < j & lcm(arr[i],arr[j] > max (arr[i],arr[j])*10)
//
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int countSpecialPairs(vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    // Loop through all pairs (i, j) where i < j
    for (int i = 0; i < n; ++i) {
        int a = arr[i];
        for (int j = i + 1; j < n; ++j) {
            int b = arr[j];
            int g = gcd(a, b);
            int minVal = min(a, b);
            int maxVal = max(a, b);

            // if (lcm > max * 10) <=> (min / gcd) > 10
            if (minVal / g > 10)
                count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& x : arr)
        cin >> x;

    cout << countSpecialPairs(arr) << endl;
    return 0;
}

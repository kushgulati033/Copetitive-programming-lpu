//find no of pair(i,j) such that i < j & lcm(arr[i] + arr[j])%M ) solve
// using first mod the whole array and then use two pair sum hash

#include <bits/stdc++.h>
using namespace std;

int countModuloPairs(vector<int>& arr, int M) {
    unordered_map<int, int> modCount;
    int count = 0;

    for (int x : arr) {
        int modVal = x % M;
        if (modVal < 0) modVal += M; // handle negatives

        int complement = (M - modVal) % M;

        if (modCount.find(complement) != modCount.end()) {
            count += modCount[complement];
        }

        modCount[modVal]++;
    }

    return count;
}

int main() {
    int n, M;
    cin >> n >> M;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << countModuloPairs(arr, M) << endl;
    return 0;
}

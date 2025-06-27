// given array size N and queries [L,R]
// for every query return of sum all even - indexed element from L to P

#include <iostream>
#include <vector>
using namespace std;

vector<int> evenPrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> evenPrefix(n, 0);

    evenPrefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0)
            evenPrefix[i] = evenPrefix[i - 1] + arr[i];
        else
            evenPrefix[i] = evenPrefix[i - 1];
    }
    return evenPrefix;
}

int evenIndexedSumInRange(const vector<int>& evenPrefix, int L, int R) {
    if (L == 0)
        return evenPrefix[R];
    else
        return evenPrefix[R] - evenPrefix[L - 1];
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> evenPrefix = evenPrefixSum(arr);

    int q;
    cin >> q;

    while (q--) {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        if (L % 2 == 1) L++; // make L even
        if (L > R) {
            cout << 0 << endl;
            continue;
        }
        sum = evenIndexedSumInRange(evenPrefix, L, R);
        cout << sum << endl;
    }

    return 0;
}

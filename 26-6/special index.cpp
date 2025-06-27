//Given an array of size n count number of special index in array?
//special index an index after removing it,sum of even indexed as equal to sum of odd index

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix_even(n), prefix_odd(n);
    prefix_even[0] = arr[0];
    prefix_odd[0] = 0;

    for (int i = 1; i < n; i++) {
        prefix_even[i] = prefix_even[i - 1];
        prefix_odd[i] = prefix_odd[i - 1];
        if (i % 2 == 0)
            prefix_even[i] += arr[i];
        else
            prefix_odd[i] += arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int even = 0, odd = 0;

        if (i > 0) {
            even = prefix_even[i - 1];
            odd = prefix_odd[i - 1];
        }

        even += (prefix_odd[n - 1] - prefix_odd[i]);
        odd += (prefix_even[n - 1] - prefix_even[i]);

        if (even == odd) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

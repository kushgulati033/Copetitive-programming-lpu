// delete a number in array such that gcd is maximum
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int maxGCDAfterDeletingOne(int arr[], int n) {
    vector<int> prefix(n), suffix(n);

    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix[i] = gcd(prefix[i - 1], arr[i]);

    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = gcd(suffix[i + 1], arr[i]);

    int maxGCD = 0;
    for (int i = 0; i < n; i++) {
        int currentGCD;
        if (i == 0)
            currentGCD = suffix[1];
        else if (i == n - 1)
            currentGCD = prefix[n - 2];
        else
            currentGCD = gcd(prefix[i - 1], suffix[i + 1]);

        maxGCD = max(maxGCD, currentGCD);
    }

    return maxGCD;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = maxGCDAfterDeletingOne(arr, n);
    cout << result << endl;

    return 0;
}

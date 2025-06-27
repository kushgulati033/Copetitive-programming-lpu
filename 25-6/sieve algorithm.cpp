//give a number check if it is prime or not


#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n + 1, true);  // Assume all numbers are prime
    isPrime[0] = isPrime[1] = false;    // 0 and 1 are not primes

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print all primes up to n
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    sieve(n);
    return 0;
}

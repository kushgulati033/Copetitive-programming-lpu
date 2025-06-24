//
// prime factorization is useful for gcd,lcm and counting number of divisors
// efficient number theory algorithm

//question
//count number of unorderd pairs such that
//i<j and arr[i],arr[j] share at least one common prime factor
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int count = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if(gcd(arr[i], arr[j]) > 1) {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
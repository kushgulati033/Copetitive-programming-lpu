#include <bits/stdc++.h>
using namespace std;

//gcd
/*gcd(a,b) = gcd(a%b,b)
 * gcd(0,b) = |b|
 * gcd(a,b) = gcd(|a|,|b|)
 * gcd(a,b) = gcd(a-b,b)
 * gcd(a,b) = gcd(b,a)
 * gcd(a,a+1) = 1
 */
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 0, b = 5;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

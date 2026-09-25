//finding the sum of digit of the numbers by recursion in cpp

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    
    if (n == 0) return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cin >> num;

    cout << sumOfDigits(num) << endl;

    return 0;
}

//program to reverse the given number using recursion in cpp

#include <bits/stdc++.h>
using namespace std;


int reverseNumber(int n, int rev = 0) {
    
    if (n == 0) return rev;


    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    cin >> num;

    cout << reverseNumber(num) << endl;
    return 0;
}

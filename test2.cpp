// 2. Absolute Difference from 100: Given an integer n, return the absolute difference between n and 100.
//  If n is greater than 100, return double the difference.
//  Example: differenceFrom100(90) → 10, differenceFrom100(110) → 20
#include <bits/stdc++.h>
using namespace std; 

int differenceFrom100(int n) {
    int diff = (n - 100); // Absolute difference from 100
    if (n > 100) {
        return 2 * diff; // Double the difference if n is greater than 100
    } else {
        return diff; // Return the normal difference
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "The result is: " << differenceFrom100(number) << std::endl;
    return 0;
}
// 1.Sum Last Two Digits: Write a function that takes an integer n and returns the sum of its last two digits.
// Example: sumLastTwoDigits(237) → 10
#include <bits/stdc++.h>
using namespace std;
int sumLastTwoDigits(int n) {
    
    int lastDigit = n % 10; // Extract the last digit
    int secondLastDigit = (n / 10) % 10; // Extract the second last digit
    int sum=lastDigit + secondLastDigit;
    return sum; // Return their sum
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int x= sumLastTwoDigits(number);
    cout << "The sum of the last two digits is: " << x;

    return 0;
}
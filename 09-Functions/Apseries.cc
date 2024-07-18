#include <iostream>
using namespace std;

// Function to calculate the nth term of an AP series
int nthTerm(int a1, int d, int n) {
    return a1 + (n - 1) * d;
}

// Function to calculate the sum of the first n terms of an AP series
int sumOfAP(int a1, int d, int n) {
    return (n * (2 * a1 + (n - 1) * d)) / 2;
}

int main() {
    int a1, d, n;

    // Input: first term, common difference, and number of terms
    cout << "Enter the first term (a1) of the AP series: ";
    cin >> a1;
    cout << "Enter the common difference (d) of the AP series: ";
    cin >> d;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    // Calculating the nth term
    int nth = nthTerm(a1, d, n);
    cout << "The " << n << "th term of the AP series is: " << nth << endl;

    // Calculating the sum of the first n terms
    int sum = sumOfAP(a1, d, n);
    cout << "The sum of the first " << n << " terms of the AP series is: " << sum << endl;

    return 0;
}

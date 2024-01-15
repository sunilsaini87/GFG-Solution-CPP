// Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cout << "Enter a number" << endl;
    cin >> n;
    long long int sum = abs((n * (n + 1)) / 2);
    cout << sum;

    return 0;
}
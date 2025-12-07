#include <iostream>

using namespace std;

int main() {
    int n;  
    cout << "Enter the amount of Fibonacci numbers (n > 0): ";
    cin >> n;
    if (n <= 0) {
        cout << "must be more then 0." << endl;
        return 1; 
    }
    long long first = 0;
    long long second = 1;
    long long next;

    cout << "first " << n << " Fibonacci numbers:" << endl;

    if (n >= 1) {
        cout << first << " ";
    }
    if (n >= 2) {
        cout << second << " ";
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;

        cout << next << " ";

        first = second;
        second = next;
    }

    cout << endl; 

    return 0;
}
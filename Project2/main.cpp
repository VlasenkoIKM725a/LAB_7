#include <iostream>

using namespace std;

int main() {
    int n;  // кількість чисел фібоначі
    cout << "Enter the amount of Fibonacci numbers (n > 0): ";
    cin >> n;
    if (n <= 0) {
        cout << "must be more then 0." << endl;
        return 1; // повернення з кодом помилки
    }
    long long first = 0; // Перше число
    long long second = 1; // Пруге число
    long long next;

    cout << "first " << n << " Fibonacci numbers:" << endl;

    // виведення перших двох чисел
    if (n >= 1) {
        cout << first << " ";
    }
    if (n >= 2) {
        cout << second << " ";
    }

    // цикл для решти чисел
    for (int i = 3; i <= n; i++) {
        next = first + second; // наступне число

        cout << next << " ";

        // оновлння змінних
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;


void swap(int &p, int &q) {
    int temp = p;
    p = q;
    q = temp;
}

int main() {
    int number1, number2;

    cin >> number1>>number2;

    cout << "number1 = " << number1 << ", number2 = " << number2 << endl;

    swap(number1, number2);


    cout << "After swapping:" << endl;
    cout << "number1 = " << number1 << ", number2 = " << number2 << endl;

    return 0;
}


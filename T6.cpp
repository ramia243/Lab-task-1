#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int numbers[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(numbers[j] > numbers[j + 1]) {

                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;


    cin >> size;

    int numbers[size];

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    bubbleSort(numbers, size);

    cout << "The sorted array is: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}



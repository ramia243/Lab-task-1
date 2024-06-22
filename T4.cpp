#include<bits/stdc++.h>
using namespace std;


int linearSearch(int numbers[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = {18,20,30,15,36};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int value = 30;

    int index = linearSearch(numbers, size, value);

    if(index != -1)
    {
        cout << "The  value " << value << " is found at index " << index << "." << endl;
    }
    else
    {
        cout << "The  value " << value << " is not found in the array." << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int Largest(int numbers[], int size)
{
    int largest = numbers[0];
    for(int i = 1; i < size; i++)
    {
        if(numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    return largest;
}

int main()
{
    int numbers[] = {10,20,30,40,50,60,70,80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largestNumber = Largest(numbers, size);

    cout  << largestNumber << endl;

    return 0;
}



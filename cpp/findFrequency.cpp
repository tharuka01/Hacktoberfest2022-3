#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array::";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int num;
    cout << "Enter the number ";
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    cout << "The frequency of given number is::";
    cout << count;

    return 0;
}
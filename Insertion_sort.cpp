
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i-1;
        while (prev >=0 && arr[prev]> current)
        {
            arr[prev+1]= arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }    
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "enter the elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    print (arr, n); 
}

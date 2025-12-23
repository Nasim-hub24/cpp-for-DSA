
#include<bits/stdc++.h>
using namespace std;
// COMPLEXITY IS O(n^2)
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int smallestindex = i; // UNSORTED PAT KA STARTING INDEX
        for (int j = i+1; j< n; j++)
        {
            if (arr[j] < arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap (arr[i], arr[smallestindex]);
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
    cout << "enter the number" ;
    cin >> n;
    cout << "enter the elements";
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    print(arr, n);
}



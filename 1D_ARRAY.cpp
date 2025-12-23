// FIND THE SMALLEST AND LAGEST NUMBER IN A ARRAY

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 12, 23 , -12 , -34, 80};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "small number is" << smallest << endl;
    cout <<"large number is" << largest << endl;
}


// PASS BY REFERENCE
/*
#include<bits/stdc++.h>
using namespace std;

void changeArr( int arr[], int n)
{
    cout << "in function" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    changeArr( arr, n);
    cout << "in main" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/
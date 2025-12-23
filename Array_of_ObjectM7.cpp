// ARRAY OF OBJECT
/*
#include<bits\stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int clas;
    int marks;
};

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);  // FOR TAKING INPUT INCLUDED SPACE
        cin >> arr[i].clas >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "<< arr[i].clas<< " " << arr[i].marks<< endl;
    }
}
*/
// SORT ARRAY OF OBJECT
/*
#include<bits\stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int clas;
    int marks;
};
bool cmp(student l, student r)
{
    if(l.marks < r.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "enter the size: ";
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].clas>> arr[i].marks;
    }
    sort(arr, arr+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "<< arr[i].clas<<" "<< arr[i].marks<<endl;

    }
    
}
*/

#include<bits\stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(student l, student r)
{
    if (l.marks > r.marks)
    {
        return true;
    }
    else if (l.marks < r.marks)
    {
        return false;
    }
    else
    {
        if (l.roll < r.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    student arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name<< " "<< arr[i].roll<< " "<< arr[i].marks << endl;
    }
    
}
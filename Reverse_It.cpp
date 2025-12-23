#include<bits\stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    string s;
    int id;
};
int main()
{
    int N;
    cin >> N;
    student arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    for (int i = 0; i < N / 2; i++)
    {
        swap(arr[i].s, arr[N - i - 1].s);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].nm<< " "<< arr[i].cls <<" "<< arr[i].s<< " "<< arr[i].id<< endl;
    } 
}
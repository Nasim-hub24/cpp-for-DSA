#include<bits\stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};
bool cmp(student l , student r)
{
    if (l.total_marks > r.total_marks)
    {
        return true;
    }
    else if (l.total_marks < r.total_marks)
    {
        return false;
    }
    else
    {
        if (l.id < r.id)
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
    int N;
    cin >> N;
    student arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    for (int i = 0; i < N; i++)
    {
        arr[i].total_marks = arr[i].math_marks + arr[i]. eng_marks;
    }
    
    sort(arr, arr+N, cmp);

    for (int i = 0; i < N; i++) 
    {
        cout << arr[i].nm<< " "<< arr[i].cls <<" "<< arr[i].s<< " "<< arr[i].id<<" "<< arr[i].math_marks<<" "<<arr[i].eng_marks<< endl;
    } 
}

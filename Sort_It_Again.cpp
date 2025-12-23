
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
};
bool cmp(student l , student r)
{
    if (l.eng_marks != r.eng_marks)
    {
        return l.eng_marks > r.eng_marks; 
    }
    else if (l.math_marks != r.math_marks) 
    {
        return l.math_marks > r.math_marks;  
    }
    else 
    {
        return l.id < r.id;  
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

    sort(arr, arr+N, cmp);

    for (int i = 0; i < N; i++) 
    {
        cout << arr[i].nm<< " "<< arr[i].cls <<" "<< arr[i].s<< " "<< arr[i].id<<" "<< arr[i].math_marks<<" "<<arr[i].eng_marks<< endl;
    } 
}

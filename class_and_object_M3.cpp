// CLASS AND OBJECT
/*
#include<bits\stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    int clas;
    float gpa;
};

int main()
{
    student kaorim;
    kaorim.roll = 10;
    kaorim.clas = 9;
    kaorim.gpa = 3.88;
    cout << kaorim.roll << " " << kaorim.clas<< " "<< kaorim.gpa<< endl;
    return 0 ;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    int clas;
    double gpa;
};

int main()
{
    student korim;
    korim.roll = 3;
    korim.clas = 1;
    korim.gpa = 4.78;
    
    student rohim;
    rohim.roll = 4;
    rohim.clas = 10;
    rohim.gpa = 4.99;

    cout << korim.roll << " " << korim.clas << " " << korim.gpa << endl;
    cout << rohim.roll << " " << rohim.clas << " " << rohim.gpa << endl;
    return 0 ;
}
*/

// CONSTRUCTOR
/*
#include<bits\stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    int clas;
    double gpa;

    student(int r, int c, double g)
    {
        roll = r;
        clas = c;
        gpa = g;
    }
};

int main()
{
    student rohim( 45, 5, 4.88);
    student korim(50, 5, 3.99);
    cout << rohim.roll << " "<< rohim.clas<< " "<< rohim.gpa << endl;
    cout << korim.roll << " "<< korim.clas<< " "<< korim.gpa << endl;
}
*/

// OBJECT RETURN FORM FUNCTION (STATIC OBJECT)
/**/
#include<bits\stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    int clas;
    double gpa;

    student(int r, int c, double g)
    {
        roll = r;
        clas = c;
        gpa = g;
    }
};

student fun()
{
    student rohim( 45, 5, 4.88);
    return rohim;
}

int main()
{
    student obj = fun();
    cout << obj.roll << " "<< obj.clas<< " "<< obj.gpa << endl;
   return 0;
}

// SORT FUNCTION
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    //sort( arr, arr+5); // ASCENDING
    //sort ( arr+2, arr+5); // FOR SORTING BETWEEN 2 AND 5 INDEX
    sort (arr , arr+5, greater<int>()); //DESCENDING

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
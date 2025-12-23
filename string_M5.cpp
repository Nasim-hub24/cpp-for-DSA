// STRING CAPACITY FUNCTION
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s ="aska amar mon balo nai";
    cout << s.size() << endl; // FOR KNOWING THE SIZE OF A STRING
    cout << s << endl;

    s.resize(10); //FOR RESIZE A STRING
    cout << s << endl;
}
*/
// STRING ELEMENT ACCESS FUNCTION
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s ;
    cout << "enter your input: " << endl;
    cin >> s;
    cout << "your input was : " << s << endl ;

    cout << s[4] << endl;
    cout << s.back() << endl;
    cout << s.front() << endl;
}
*/
// STRING ITERATORS
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string x = "today date is 18june 2025";
    //for (int i = 0; i < x.size(); i++)
    //{
        //cout << x[i] << endl;
    //}
    //

    cout << *x.begin() << endl;
    cout << *(x.end()-1) << endl;
    // FOR PRINTING A STRING USING ITERATORS
    for (auto  it = x.begin(); it < x.end(); it++)
    {
        cout << *it << endl;
    }   
}
*/
// STRING INPUT WITH SPACE
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s ;
    getline(cin ,s);
    cout << s << endl;
}
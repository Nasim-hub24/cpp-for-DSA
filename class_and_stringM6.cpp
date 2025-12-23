//SORT STRING USING SORT FUNCTION
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s ;
    getline(cin,s);
    sort(s.begin(), s.end());
    cout << s << endl;
}
*/

// REVERSE AN ARRAY
/*
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
    }
    
    reverse(a, a+n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
*/
// REVERSE AN STEING
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin ,s); // FOR TAKIN INPUT INCLUDING SPACE
    reverse(s.begin(), s.end());
    cout << s << " ";
}
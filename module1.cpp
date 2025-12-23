// PRINTING IN C++
/*
#include<iostream>
int main()
{
    std :: cout << "bash is loading";
    return 0 ;
}
*/

// VARIAVLE DECLERING 
/*
#include<iostream>
int main()
{
    int x = 100;
    char c = 'b';
    double d = 3.56;
    std :: cout << x << " \n" << c << " \n" << d << "\n"; // std :: endl for printing new line
    // my favoirite number is 100
    std :: cout << "my favourite number is: " << x;
    return 0 ;
}
*/

// TAKING USER INPUT
/*
#include<iostream>
int main()
{
    int x;
    std :: cin >> x ;
    std :: cout <<"number is: " << x << "\n";
}
*/

// SIMPLE INPUT AND OUTPUT
/*
#include<iostream>
using namespace std ;
int main()
{
    int x;
    cin >> x;
    cout << " number is: " << x << "\n";
    // type casting 
    int y =65;
    cout << (int) y << endl ;
}
*/

// IF ELSE STATEMENT
/*
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "number is: \n" << x ;
    cin >> x;
    if (x%2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    return 0;
}
*/

// SWICH CASE
/*
#include<iostream>
using namespace std ;
int main()
{
    int day ;
    cin >> day ;
    switch (day)
    {
        case 1:
        cout << "sturday";
        break;

        case 2:
        cout << "sunday";
        break;

        case 3:
        cout << "monday";
        break;

        case 4:
        cout << "thursday";
        break;

        default:
        cout << "wrong input";
    }
    return 0;
}
*/

// VOWEL OR CONCONENT USING SWICH CASE
/*
#include<iostream>
using namespace std ;
int main()
{
    char c;
    cin >> c ;
    switch (c)
    {
    case 'a':
        cout << "vowel \n";
        break;
    case 'e' :
        cout << "vowel \n";
        break;
    case 'i' :
        cout << "vowel \n";
        break;
    case 'o' :
        cout << "vowel \n";
        break;
    case 'u' :
        cout << "vowel \n";
        break;        
    default:
        cout << "consonent \n";
        break;
    }
}
*/

// MIN AND MAX FUNCTION 

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    /*if (a > b)
    {
        cout << a << "is the largest number" << "\n" ;
    }
    else
    {
        cout << b << "is the largest number" << "\n";
    }
    */
    cout << min (a,b) << endl ;
    //cout << min({ 3, 30,20 }) << endl ;

    cout << max (a, b) << endl;
    // cout << max ({30,, 40, 50}) << endl ;

    //int temp =a;
    //a = b;
    //b = temp ;

    swap ( a, b);
    cout << a << " " << b << endl ;
    
}

// HADER FILE 

//#include<bits/stdc++.h>
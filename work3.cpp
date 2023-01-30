#include <iostream>
using namespace std;
int m(int multiply);
main()
{
    int result;
    int multiply;
   result = m(multiply);
}
int m(int multiply)
{
    int result;
    int x;
    cout <<"which no table you want:";
    cin >> x;
    for(int y = 1;y <= 10;y++)
    {
        multiply = x*y; 
        cout << x <<"*"<< y <<"=" << multiply << endl;
    }
    return result;
}
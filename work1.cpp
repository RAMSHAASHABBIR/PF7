#include <iostream>
using namespace std;
int num();
main()
{
int result;
result = num();
}
int num()
{
    int x;
    int result;
    for(int x = 1;x <= 10;x = x + 1)
    {
    cout << x << endl;
    }
    return result;
}
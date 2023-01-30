#include <iostream>
using namespace std;
int ans(int sum);
main()
{
    int result;
    int sum = 0;
    sum = ans(sum);
}
int ans(int sum)
{
    for(int x = 1;x <= 5;x++)
    {
        sum = sum + x;
    }
    cout << sum;
    return sum;
}


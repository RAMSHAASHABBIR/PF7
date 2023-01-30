#include <iostream>
using namespace std;
int s(int sum);
main()
{
    int sum = 0;
    int result;
   result = s(sum);
}
int s(int sum)
{

    int result;
    int n1 = 0;
    int n2 = 1;
    int next = 0;
    int x;
    cout <<"how much lenght:";
    cin >> x;
    cout <<"0" << endl;
    cout <<"1" << endl;
    for(int y = 1;y <= x-2;y++)
    {
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        cout << next << endl;
    }
    return result;
}
#include <iostream>
using namespace std;
void calculate(float money, int year);
main()
{
    float money;
    int year;
    cout << "enter money:";
    cin >> money;
    cout << "enter year:";
    cin >> year;
    calculate(money, year);
}
void calculate(float money, int year)
{
    float even=0;
    float odd=0;
    float total=0;
    float finaltotal=0;
    float age=18;
    float evenCounter = 0;
    float oddCounter = 0;
    for(int x=1800; x<=year; x++)
    {
        if(x%2!=0)
        {
            age++;
            oddCounter++;
            odd = oddCounter * (12000+(50*age));
        }
        if(x%2==0)
        {
            evenCounter++;
            even = evenCounter * 12000;
        }
    }
    total=even+odd;
    if(total>money)
    {
        finaltotal=total - money;
        cout <<"money required: "<< finaltotal <<endl;
    }
    else if(total<money)
    {
        finaltotal= money - total;
       cout <<"money left: "<< finaltotal <<endl;
    }
}
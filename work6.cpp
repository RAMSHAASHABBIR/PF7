#include <iostream>
using namespace std;
int lcm(int a,int b,int smaller);
main()
{
    int a;
    int b;
    int smaller;
    float result;
    cout <<"enter a no:";
    cin >> a;
    cout <<"enter b no:";
    cin >> b;
   result = lcm(a,b,smaller);
}
int lcm(int a,int b,int smaller)
{
    float formula;
    float result;
    if(a > b)
    smaller = a;
    else
    smaller =b;
    for(int loop = 2;loop <= smaller;loop++ )
    {
        if(a%loop==0 && b%loop==0)
        {
            formula = (a*b)/loop;
            cout <<"LCM is:" << formula;
            break;

        }
    }
     return result;
}
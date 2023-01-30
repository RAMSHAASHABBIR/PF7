#include <iostream>
using namespace std;
int totaldigit(int no);
main()
{
    int no;
    cout <<"enter a no:";
    cin >> no;
    int result;
    result = totaldigit(no);
}
int totaldigit(int no)
{
    int result;

    for(int result=0;result>0;result++)
    {
        no=no/2;
        result=result+1;
    }

    cout << result;
    return result;
}
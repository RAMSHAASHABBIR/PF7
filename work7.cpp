#include <iostream>
using namespace std;
void per(float totalno,float x);
main()
{
    float totalno;
    float x;
    cout << "how many no you want:";
    cin >> totalno;
    per(totalno,x);
}
void per(float totalno,float x)
{
    float formula1=0;
    float result;
    float count=0;
    float count1=0;
    float count2=0;
    float count3=0;
    float count4=0;
    float formula2=0;
    float formula3=0;
    float formula4=0;
    float formula5=0;
    for(int y =1;y<=totalno;y++)
    {
        cout <<"enter no:";
        cin >> x;
        if(x<200)
        {
            count = count+1;
        }
        else if(x >=200 && x<400)
        {
            count1 = count1 + 1;
        }
        if(x>=400 && x<600)
        {
           count2 = count2 +1;
        }
        else if(x>=600 && x<800)
        {
           count3 = count3 +1;
        }
        if(x>=800 && x<1000)
        {
           count4 = count4+1;
        } 
    }
     formula1 = (count/totalno)*100;
     cout <<"per is:" << formula1 << endl;
     formula2 = (count1/totalno)*100;
     cout <<"per is:" << formula2 << endl;
     formula3 = (count2/totalno)*100;
     cout <<"per is:" << formula3 << endl;
     formula4 = (count3/totalno)*100;
     cout <<"per is:" << formula4 << endl;
     formula5 = (count4/totalno)*100;
     cout <<"per is:" << formula5 << endl;
}
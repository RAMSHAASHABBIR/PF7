#include <iostream>
using namespace std;
void calculatemoney(int age,float pricemachine,int toy);
main()
{
int age;
float pricemachine;
int toy;

cout <<"enter age:";
cin >> age;
cout <<"enter price of washing machine:";
cin >> pricemachine;
cout <<"enter price of toy:";
cin >> toy;
calculatemoney(age,pricemachine,toy);
}
void calculatemoney(int age,float pricemachine,int toy)
{
    
    float y=0;
    float x;
    float savemoney;
    float remaining;
    for(int x=2;x<=age;x=x+2)
    {
     y=y+(10*(x/2));
    }
    
    float save=y-(age/2);
    int toy2=toy*(age/2);
    savemoney=save+toy2;
    cout<<y;
if(pricemachine > savemoney)
{
    remaining=pricemachine-savemoney;
    cout <<"no! money required" <<remaining;
}
else
{
    remaining=savemoney-pricemachine;
    cout <<"yes! money left" <<remaining;
}

}


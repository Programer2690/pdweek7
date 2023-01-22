#include<iostream>
using namespace std;
void seq(int);
main()
{
    int num;
    cout<<"amplify: ";
    cin>>num;
    seq(num);
}
void seq(int num)
{
    int x;
    for(x=1;x<=num;x++)
    {
        if(x%4==0)
        {
            cout<<x*10<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
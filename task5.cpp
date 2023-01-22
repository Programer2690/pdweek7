#include<iostream>
using namespace std;
int func(int);
main()
{
    int num=0;
    cout<<"triangle: ";
    cin>>num;
    int result=func(num);
    cout<<result;
}
int func(int num)
{
    int sum=0;
    for(int x=1;x<=num;x++)
    {
        sum=sum+x;
    }
    return sum;
}
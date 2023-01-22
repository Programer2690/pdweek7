#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "enter no.: ";
    cin >> num;
    int numb, sum = 0;
    float bus = 0, truck = 0, train = 0;
    for (int x = 1; x <= num; x++)
    {
        
        cin >> numb;
        sum = sum + numb;
        if (numb <= 3)
        {
            bus = (numb / sum) * 100;
        }
        if (numb <= 11 && numb > 3)
        {
            truck = (numb / sum) * 100;
        }
        if (numb > 11)
        {
            train = (numb / sum) * 100;
        }

        cout << bus << endl
             << truck << endl
             << train << endl;
    }
}
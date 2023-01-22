#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "enter no. of days: ";
    cin >> num;
    int numb = 0;
    int t = 0, u = 0, d, result;
    d = 7;
    for (int x = 1; x <= num; x++)
    {
        cin >> numb;
        if (x % 3 != 0)
        {
            if (numb <= d)
            {
                t = t + numb;
            }
            else
            {
                t = t + d;
                u = u + (numb - d);
            }
        }
        if (x % 3 == 0)
        {
            if (u > t)
            {
                d = d + 1;
            }
            if (numb <= d)
            {
                t = t + numb;
            }
            else
            {
                t = t + d;
                u = u + (numb - d);
            }
        }
    }

    cout << "treated: " << t << endl;
    cout << "untreated: " << u;
}
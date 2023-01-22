#include <iostream>
using namespace std;

main()
{
    int num, numb = 0;
    cout << "enter no.: ";
    cin >> num;
    float p1 = 0, p2 = 0, p3 = 0;
    for (int x = 1; x <= num; x++)
    {
        cin >> numb;

        if (numb % 2 == 0)
        {
            p1 = p1 + 1;
        }
        if (numb % 3 == 0)
        {
            p2 = p2 + 1;
        }
        if (numb % 4 == 0)
        {
            p3 = p3 + 1;
        }
    }
    float per1, per2, per3;
    per1 = (p1 / num) * 100;
    per2 = (p2 / num) * 100;
    per3 = (p3 / num) * 100;
    cout << per1 << "%" << endl
         << per2 << "%" << endl
         << per3 << "%" << endl;
}

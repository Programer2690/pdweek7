#include <iostream>
using namespace std;
void nest(int row);
main()
{
    int row;
    cout << "enter rows: ";
    cin >> row;
    nest(row);
}
void nest(int row)
{
    for (int x = row; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
void nest(int row);
void down(int row);
main()
{
    int row;
    cout << "enter rows: ";
    cin >> row;
    nest(row);
    down(row);
}
void nest(int row)
{
    int c =1;
    int d=row/2;
    for (int x = d; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << " ";
        } 
        for (int y = c; y >= 1; y--)
        {
            cout << "*";
        }
        c++;
        cout << endl;
    }
    
}
void down(int row)
{
    int c =1;
    int d=row/2;
    for (int x = d; x >= 1; x--)
    {
        for (int y = c; y >= 1; y--)
        {
            cout << " ";
        } 
        for (int y = 1; y <= x; y++)
        {
            cout << "*";
        }
        c++;
        cout << endl;
    }
    
}
#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int k;
    
    for(i = 1; i <= 5; i++)
    {
        for(k = 5; k >= i; k--)
        {
            cout << "\t";
        }
        for(j = 1; j <= i; j++)
        {
            cout << j << "\t\t";
        }
        cout << "\n";
    }
    
    for(i = 4; i >= 1; i--)
    {
        for(k = 5; k >= i; k--)
        {
            cout << "\t";
        }
        for(j = 1; j <= i; j++)
        {
            cout << j << "\t\t";
        }
        cout << "\n";
    }
    
    return 0;
}

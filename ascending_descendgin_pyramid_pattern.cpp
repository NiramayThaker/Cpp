#include <iostream>

using namespace std;

int main()
{
    int col_end;
    int n;
    cin >> n;
    
    cout << endl;
    
    for ( int row = 1 ; row <= n ; row ++)
    {
        
        for ( int space = 1; space <=  (n - row) ; space ++)
        {
            cout << " ";
        }
        
        for ( int col = 1 ; col <= row ; col ++ )
        {
            cout << col;
            col_end = col; // saves last value beign printed
        }
        
        // for ( int col2 = row - 1 ; col2 >= 1 ; col2 -- )
        for ( int col2 = col_end - 1 ; col2 >= 1 ; col2 -- )
        {
            cout << col2;
        }
        
        cout << endl;

    }
    
    return 0;
}

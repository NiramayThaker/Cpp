#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    // cin >> n;
    
    for ( int row = 0 ; row <= n - 1; row ++ )
    {

        for ( int t1 = 1; t1 <= (n - row) ; t1 ++ )
        {
            cout << " " << t1 << " ";
        }
        
        for ( int star = 0 ; star <= row - 1; star ++ )
        {
            cout << " * ";
        }
        
        for ( int star_rev = 0 ; star_rev <= row - 1 ; star_rev ++ )
        {
            cout << " * ";
        }
        
        for (int t2 = (n - row); t2 >= 1; t2--)
        {
            cout << " " << t2 << " ";
        }
      
        cout << endl;
    }

    return 0;
}

//this is very small code of TOWER OF HANOI using integer

#include <iostream>

using namespace std;

void toh(int s, int d, int n) 
// s = source[from], d = destinatiom[to], n = No. of disk
{
	int t = 6 - s - d;
	if (n == 1)
	{
		cout << "the disk is moving from [ " << s << " ] to [ " << d << " ] \n"; // The 'cout' which will show all output
	}
	else
	{
		toh(s, t, n - 1);
		toh(s, d, 1);
		toh(t, d, n - 1);
	}
}

int main()
{
	toh(1, 3, 10);
}

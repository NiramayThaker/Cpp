// Tower of hanoi using characters ... 

#include <iostream>

using namespace std;

void towerOfHanoi(int n, char from_source,
	char to_destination, char traveling_rod)
{
	if (n == 1)
	{
		cout << "Move disk 1 from Source " << from_source
			<< " to destination " << to_destination << endl;
		return;
	}

	towerOfHanoi(n - 1, from_source, traveling_rod, to_destination);

	cout << "Move disk " << n << " from source " << from_source <<
		" to destination " << to_destination << endl;

	towerOfHanoi(n - 1, traveling_rod, to_destination, from_source);
}

int main()
{
	int n = 10; // Number of disks 
	towerOfHanoi(n, 'S', 'T' , 'D'); // A, B and C are names of rods 
	return 0;
}

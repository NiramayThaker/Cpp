// Just playing with 'BEEP' and 'SLEEP'

#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int FirstLine()
{
	cout << "----------------HAPPY BIRTHDAY----------------\n";
	Beep(750, 3000);
	Sleep(100);
	Beep(750, 1000);

	return 0;
}

int main()
{
	FirstLine();

	for (int i = 0; i < 5; i++)
	{
		cout << "                HAPPY BIRTHDAY                \n";
		Beep(750, 300);
	}
}

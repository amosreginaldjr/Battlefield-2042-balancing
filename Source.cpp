#include<iostream>
#include<windows.h>
#include"structsHolder.h"
#include"limits.h"
using namespace std;

string setcolor(unsigned short color);
int main(int argc, char** argv)
{
	int class_selection = -1;

	while (class_selection != 0)
	{
		cout << "What class option would you like to see\n(Enter the corresponding number)" << endl;
		setcolor(2);
		cout << "Enter \'0\' to end the program!" << endl;
		setcolor(7);
		cout << "1) Assult\t2) Engineeer\n3) Recon\t4) Support" << endl;
		cout << "Your Entry:";
		cin >> class_selection;
		system("cls");

		limits lim;
		if (class_selection == 1)
			lim.assultLimits();
		else if (class_selection == 2)
			lim.engineerLimits();
		else if (class_selection == 3)
			lim.reconLimits();
		else if (class_selection == 4)
			lim.supportLimits();
		else if (class_selection < 0 || class_selection > 4)
			cout << "Invalid Entry!" << endl;

		system("pause");
		system("cls");
	}
}

string setcolor(unsigned short color) //got online
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
	return "";
}
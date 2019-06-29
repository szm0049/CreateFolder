#include "stdafx.h"
#include<Windows.h>
#include<iostream>

using namespace std;

int main()
{

	BOOL bDir;
	bDir = CreateDirectoryA("C:\\Users\\szm00\\Documents\\practicefolder\\Dir1", NULL);

	if (bDir == FALSE)
	{
		cout << "CreateDirectory Failed & Error No - " << GetLastError() << endl;
	}

	else
		cout << "CreateDirectory Success" << endl;

	getchar();

	bDir = RemoveDirectoryA("C:\\Users\\szm00\\Documents\\practicefolder\\Dir1");

	if (bDir == FALSE)
	{
		cout << "RemoveDirectory Failed & Error No - " << GetLastError() << endl;
	}

	else
		cout << "RemoveDirectory Success" << endl;

	system("PAUSE");

	return 0;
}

#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
int main()

{
	int n, i, j;
	char arr[100], y;
	cout << "Enter any elements continuously: ";
	cin >> arr;
	n = strlen(arr);
	for (j = 0; j < n; j++)
		for (i = 0; i < n - 1; i++)
		{
		if (arr[i+1] < arr[i]) 
			{
			y = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = y;
			}
		}
	cout << arr << endl;
	cout << "\nArray size is: "<< n << endl;
	getch();
	return 0;
}

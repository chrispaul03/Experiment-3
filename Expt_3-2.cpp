#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	const int PROVINCE = 3;
	const int WEEK = 7;
    int temperature[PROVINCE][WEEK];
    cout << "Enter all temperature for a week of Province 1, Province 2 and then Province 3. \n";
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1  << " : ";
            cin >> temperature[i][j];
        }
    }
    cout << "\n\nDisplaying Values:\n";
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Province " << i + 1  << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
	getch();
    return 0;
}

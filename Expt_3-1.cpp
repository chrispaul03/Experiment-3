#include<iostream>
#include<conio.h>
using namespace std;
int main ()

{
    int i;
	float arr[10], max, min, sum, average;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (min > arr[i]) 
		min = arr[i];
    }
    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i]) 
		max = arr[i];
    }
    cout << "Smallest integer : " << min << endl;
    cout << "Largest integer : " << max << endl;
    for(i=0;i<10;++i)
    {
    	  sum=sum+arr[i];
	}
    cout<<"Sum of numbers is: "<<sum << endl;
    average = sum / i;
    cout << "Average number is: " << average;
    getch();
	return 0;
}


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int a, b, temp;
	int s;
	
	cout << "Selection Sorting...\n";

	cout << "Enter array size : ";
	cin >> s;
	
	int arr[s];
	cout << "Enter the " << s << " elements: \n";

	for(a = 0; a < s; a++)
	{
		cin >> arr[a];
	}
	
	cout << "\nYour data: ";
	for (a = 0; a < s; a++)
	cout << arr[a] << " ";
	
{
	for (a = 0; a < s; a++)
	{
		for (b = a + 1; b < s; b++)
		{
			if (arr[a]>arr[b])
			{
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	} 			
				cout << "\n\nAfter using selection sort...\n\n";
				cout << "Sorted data: ";
				for(a = 0; a < s; a++)
				{
					cout << arr[a] << " ";
				}
	return 0;
	getch();
}
}

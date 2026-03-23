#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	int first, second;
	int sum =0;

	cout<<"Enter the first number: ";
	cin >>first;

	cout<<"Enter the second number: ";
	cin >> second;

	if (second > first)
	{
		for (int i = first; i <= second;  i++)
		{
			sum += i;
		}

		cout << "Sum = " << sum << endl;
	}
	else
	{ 
		return 0;
	}
	return 0;
}

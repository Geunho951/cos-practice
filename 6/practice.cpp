#include <iostream>
#include <cstdlib>
using namespace std;

int check_validity(int x)
{
    if (x >= 1 && x <= 10)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    int i, x;
    int *numbers;

    cout << "Enter the number of inputs: ";
    cin >> x;

    while (!check_validity(x))
    {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin >> x;
    }

    numbers = (int *)malloc(sizeof(int) * x);

    for (i = 0; i < x; i++)
    {
        cout << "Please insert the inputs (" << i + 1 << "th input): ";
        cin >> numbers[i];
    }

    for (i = 0; i < x; i++)
    {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    free(numbers);

    return 0;
}
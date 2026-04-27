#include <iostream>
#include <cstdlib>
using namespace std;

int check_validity(int a, int b)
{
    if (b > a)
        return 1;
    else
        return 0;
}

int sum_up(int a, int b)
{
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        sum += i;
    }

    cout << "Sum from " << a << " to " << b << " = " << sum << endl;

    return sum;
}

int main(int argc, char *argv[])
{
    int a, b, sum;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (check_validity(a, b))
    {
        sum = sum_up(a, b);
    }
    else
    {
        cout << "The second number must be bigger than the first number." << endl;
        return 0;
    }

    return 0;
}
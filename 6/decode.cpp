#include <iostream>
using namespace std;

void decode1(long *xp, long *yp, long *zp)
{
    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;
}

int main()
{
    long x, y, z;

    x = 10000;
    y = 20000;
    z = 30000;

    cout << "before decode1(): x: " << x << " y: " << y << " z: " << z << endl;

    decode1(&x, &y, &z);

    cout << "after decode1(): x: " << x << " y: " << y << " z: " << z << endl;

    return 0;
}
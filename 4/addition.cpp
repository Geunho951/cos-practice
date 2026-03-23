#include <iostream>
#include <cstring>
using namespace std;
int uadd_ok(unsigned a, unsigned b) {
	return 0;
}
int tadd_ok(int a, int b) {}
int main(int argc, char *argv[]) {
	int a, b;
	unsigned x,y ;

	if (argc !=3)
	{
		cout <<" You should insert two numbers in a hexadecial way" << endl;
		return 0;
	}
	a=strtol(argv[1], NULL, 16);
	b=strtol(argv[2], NULL, 16);
	x= (unsigned) a;
	y= (unsigned) b;

	cout << "Unsigned Addition ===" << endl;
	if (uadd_ok(x,y))
		cout << "No overflow" << endl;
	else
		cout << "Overflow"<< endl;

	cout << "Signed Addition ===" << endl;

	if (tadd_ok(a,b))
		cout << "N0 overflow" << endl;
	else
		cout << "Overflow" << endl;
	return 0;
}


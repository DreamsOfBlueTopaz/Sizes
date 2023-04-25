
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << USHRT_MAX << endl;
	cout << endl;
	cout << sizeof(long) << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl;
	cout << ULONG_MAX << endl;
	cout << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << UINT_MAX << endl;
	cout << endl;
	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << ULLONG_MAX << endl;
}
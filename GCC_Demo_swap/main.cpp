#include <iostream>
#include "include/swap.h"

using namespace std;

int main()
{
	int a = 5, b = 6;
	cout << "a = " << a << "b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << "b = " << b << endl;
}

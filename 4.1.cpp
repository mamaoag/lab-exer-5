#include <iostream>
using namespace std;

int main()
{
	int baryabol = 25;
	int *tagaturo = &baryabol;
	
	cout << "This is the address " << &baryabol << endl;
	cout << "This is the value " << *tagaturo << endl;
	
	return 0;
}

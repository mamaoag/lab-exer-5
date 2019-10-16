#include <iostream>
using namespace std;

int main()
{
	int variable = 25;
	int *tagaturo = &variable;
	
	cout << "This is the address " << &variable << endl;
	cout << "This is the value " << *tagaturo << endl;
	
	return 0;
}

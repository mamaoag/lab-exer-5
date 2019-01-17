#include <iostream>
using namespace std;

int main()
{
	int lagayan[5];
	int *tagaturo = lagayan;
	
	
	cout << "Enter five integer: " << endl;
	for (int ekis = 0 ;ekis < 5; ekis++)
	{
		cin>>lagayan [ekis];	
	}
	
	for (int zey = 0 ;zey < 5; zey++)
	{
		cout << *tagaturo << " ";
		*tagaturo++;	
	}
	
	
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char pangalan[] = "Aryel";
	char *tagaturo = pangalan;
	
	for (int ekis = 0 ;ekis < strlen(pangalan); ekis++)
	{
		cout << *tagaturo;
		tagaturo++;
	}
	
	return 0;
}

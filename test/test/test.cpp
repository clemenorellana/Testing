#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
const int size=5;
void alreves(int tam)
{
	cout<<tam;
	alreves(tam+1);
}
int main()
{
	

	alreves(1);
	system ("PAUSE");
	return 0;
}
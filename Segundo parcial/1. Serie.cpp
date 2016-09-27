#include <iostream>
using namespace std;

void MostrarSerie(){
	cout << "Serie del 500 al 400" << endl;
	
	for (int i = 500; i >= 400; i--)
	{
		cout << i << " ";
	}
}

int main()
{
	MostrarSerie();
	return 0;
}
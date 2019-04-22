#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
	vector<int> v = {5, 3, 7, 6, 8, 1, 4};

	mostrarVector(v, v.size());
	cout << "************" << endl;
	quickSort(v, 0, v.size()-1);
	cout << "************" << endl;
	mostrarVector(v, v.size());

	return 0;
}

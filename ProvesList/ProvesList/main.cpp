#include <iostream>
#include "DList.h"

int main(int argc, char* argv[])
{

	DList<int> list;

	int n1 = 2;
	int n2 = 1;
	int n3 = 3;

	list.Add(n1);
	list.Add(n2);
	list.Add(n3);

	list.RemoveElement(/*Com creo un node i li passo per debugar*/);

	//list.clear();

	getchar();
	return 0;
}
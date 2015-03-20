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

	getchar();
	return 0;
}
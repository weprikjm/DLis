#include <iostream>
#include "DList.h"

int main(int argc, char* argv[])
{

	DList<int> list;

	int n1 = 1;
	int n2 = 2;
	int n3 = 3;

	list.Add(n1);
	list.Add(n2);
	list.Add(n3);
	//printf("%d", list.getStart());
	//printf("%d", list.getEnd());
	list.RemoveElement(list.getElementAtPos(0));
	list.RemoveElement(list.getElementAtPos(0));
	list.RemoveElement(list.getElementAtPos(0));
	printf("%d", list.getStart());

	//list.clear();

	getchar();
	return 0;
}
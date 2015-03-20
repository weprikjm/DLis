#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ProvesList/DList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DList<int> list;
			int n1 = 2;
			int n2 = 1;
			int n3 = 3;

			list.Add(n1);
			list.Add(n2);
			list.Add(n3);

			int n = list.getStart();

			Assert::AreEqual(n,2);


		}

	};
}
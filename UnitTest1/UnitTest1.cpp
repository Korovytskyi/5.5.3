#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1C/Vector3D.cpp"
#include "../5.1C/Vector3D.h"
#include "../5.1C/Vector.cpp"
#include "../5.1C/Vector.h"
#include "../5.1C/Vector2.cpp"
#include "../5.1C/Vector2.h"
#include "../5.1C/Exception.cpp"
#include "../5.1C/Exception.h"
#pragma pack(1)
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector A(1, 1, 1);
			
			Assert::AreEqual(A.getX(), 1.0);
		}
	};
}

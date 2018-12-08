#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Aimforcomplete/src/ball.h"
#include "../Aimforcomplete/src/bar.h"
#include "../Aimforcomplete/src/block.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AimforconpleteTDD
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		
		TEST_METHOD(ballDraw)
		{
			ball* ballp = new ball();
			Assert::IsTrue(ballp->show());
		}


		TEST_METHOD(barDraw) {

			bar* barp = new bar();
			Assert::IsTrue(barp->show());

		}


		TEST_METHOD(blockDraw) {
			block* blockp = new block();
			Assert::IsTrue(blockp->show());

		}



	};
}
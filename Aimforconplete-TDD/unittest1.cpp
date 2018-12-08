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
			std::unique_ptr<ball> ballp(new ball());
			Assert::IsTrue(ballp->show());
		}


		TEST_METHOD(barDraw) {

			std::unique_ptr<bar> barp(new bar());
			Assert::IsTrue(barp->show());

		}


		TEST_METHOD(blockDraw) {
			std::unique_ptr<block> blockp(new block());
			Assert::IsTrue(blockp->show());

		}


		TEST_METHOD(moveBar) {
			std::unique_ptr<bar> barpLeft(new bar(0));
			std::unique_ptr<bar> barpRight(new bar(0));

			barpRight->moveRight();
			Assert::AreEqual(barpRight->getPointX(), 1);

			barpLeft->moveLeft();
			Assert::AreEqual(barpLeft->getPointX(), -1);

		}






	};
}
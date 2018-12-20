#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Aimforcomplete/src/ball.h"
#include "../Aimforcomplete/src/bar.h"
#include "../Aimforcomplete/src/block.h"
#include "../Aimforcomplete/src/userInKey.h"

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
			std::unique_ptr<bar> movedBar(new bar(0));

			barpRight->moveRight();
			Assert::AreEqual(barpRight->getPointX(), 1);

			barpLeft->moveLeft();
			Assert::AreEqual(barpLeft->getPointX(), -1);

			for (int i = 0; i < 100; i++) {
				movedBar->moveRight();
			}
			Assert::AreEqual(movedBar->getPointX(), 100);
			Assert::IsTrue(movedBar->show());

		}


		TEST_METHOD(inUserKey) {
			std::unique_ptr<userInKey> keyp(new userInKey());
			char* keyData = new char[256];
			keyp->getUserHitKey(keyData);
			//KEY_INPUT_A=0x1E
			Assert::IsTrue(keyData[0x1E] == 1);


		}







	};
}
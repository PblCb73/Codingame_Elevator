#include "elevator.h"
#include "gtest/gtest.h"

using namespace std;
//Тестовый набор с codingame
TEST( TestElevator, FROM_CODINGAME )
{
	EXPECT_EQ( 3, testElevator( 10, 1, 1, 8, 5 ) );
	EXPECT_EQ( 2, testElevator( 13, 1, 1, 9, 11 ) );
	EXPECT_EQ( 3, testElevator( 11, 2, 3, 10, 6 ) );
	EXPECT_EQ( 0, testElevator( 100, 4, 2, 1, 22 ) );
	EXPECT_EQ( 0, testElevator( 100, 100, 100, 100, 1 ) );
	EXPECT_EQ( 1997, testElevator( 1999, 1000, 999, 2, 1 ) );
	EXPECT_EQ( 0, testElevator( 13, 3, 3, 2, 10) );
	EXPECT_EQ( 0, testElevator( 13, 10, 9, 1, 6) );
}

//Тестовый набор от Кирилла
TEST( TestElevator, FROM_KIRILL )
{
	EXPECT_EQ( 0, testElevator( 10, 2, 10, 9, 1 ) );
	EXPECT_EQ( 6, testElevator( 10, 3, 4, 2, 6 ) );
}

//Собственный тестовый набор
TEST( TestElevator, FROM_ME )
{
	EXPECT_EQ( 0, testElevator( 10, 0, 0, 9, 1 ) );
	EXPECT_EQ( 6, testElevator( 10, 3, 4, 2, 6 ) );
	EXPECT_EQ( 2, testElevator( 10, 10, 1, 1, 2 ) );
	EXPECT_EQ( 0, testElevator( 9, 7, 3, 3, 7 ) );
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
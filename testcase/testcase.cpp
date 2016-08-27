#include <limits.h>
#include "gtest/gtest.h"
#include "libalgo.h"
#include "libcom.h"
#include "libtest.h"

class MultiplyTest : public testing::Test {

};
TEST_F(MultiplyTest, findMean)
{
	int a;
	a = print_test();
	EXPECT_EQ(0, a);
}
TEST_F(MultiplyTest, findMean1)
{
	int a[8] = {1,4,2,7,2,3,6,7};
	int result[8] = {1,2,2,3,4,6,7,7};
	bubble_sort(a, 8);
	for (int i = 0; i < 8; i++) {
		EXPECT_EQ(result[i], a[i]);
	}
}
TEST_F(MultiplyTest, findMean2)
{
	int a;
	a = print_test();
	EXPECT_EQ(0, a);
}
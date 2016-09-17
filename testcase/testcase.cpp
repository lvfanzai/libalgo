#include <limits.h>
#include "gtest/gtest.h"
#include "libalgo.h"
#include "libcom.h"
#include "libtest.h"

#define PRINT(int) printf(#int " =%d\n",int)
#define PRINT1(format,x) printf(#x " =%"#format"\n",x)
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
TEST_F(MultiplyTest, findMean3)
{
	int x = 1, y = 1, z = 1;
	x += y += z;
	PRINT(x<y?y:x);

	PRINT(x < y ? x++ : y++);

	PRINT(x);
	PRINT(y);

	PRINT(z += x < y ? x++ : y++);
	PRINT(y);
	PRINT(z);

	x = 3; y = z = 4;
	PRINT((z >= y > z) ? 1 : 0);
	PRINT(z >= y&&y >= x);

}

TEST_F(MultiplyTest, findMean4)
{
	unsigned int ux = -6;
	PRINT1(o,ux);
	PRINT1(d,ux/2);
	PRINT1(d, ux>>1);
}
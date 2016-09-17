#include <limits.h>
#include "gtest/gtest.h"
#include "libalgo.h"
#include "libcom.h"
#include "libtest.h"

#include <cstdio>
#include <ctime>


class MultiplyAlgo : public testing::Test {

};
TEST_F(MultiplyAlgo, ctimeshow)
{
	time_t biggest = 0x7fffffff;
	time_t t;
	t = time(&t);
	printf("biggest = %s\n",ctime(&biggest));
	printf("t = %s\n", ctime(&t));
}

TEST_F(MultiplyAlgo, floatacc)
{
	float a;
	float b;
	float c;
	a = 1234567.0;
	b = 12345678.0;
	c = 123456789.0;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);
	a = a + 1;
	b = b + 1;
	c = c + 1.0;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);
}

TEST_F(MultiplyAlgo, floatacc1)
{
	float a = 23400001;
	float b = a + 1.0f;
	float c;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	c = b -a ;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);
}

TEST_F(MultiplyAlgo, floatacc2)
{
	float x;
	float y;
	x = 0.51;
	y = 0.5;
	printf("x= %f\n", x);
	printf("y = %f\n", y);
}
TEST_F(MultiplyAlgo, insertion)
{
	int a[8] = { 1,4,2,7,2,3,6,7 };
	int result[8] = { 1,2,2,3,4,6,7,7 };
	insertion_sort(a, 8);
	for (int i = 0; i < 8; i++) {
		EXPECT_EQ(result[i], a[i]);
	}
}
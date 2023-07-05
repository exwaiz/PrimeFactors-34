#include "pch.h"
#include "../tdd/prime_factors.cpp"

using namespace std;

TEST(TestCaseName, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = { };
	EXPECT_EQ(expected, prime_factor.of(1));
}

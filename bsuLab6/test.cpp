#include "gtest/gtest.h"
#include "../lab6/Frac.cpp" 

TEST(GetTest, test1) {
	Frac n(2, 3);
	ASSERT_EQ(2, n.GetFracNum());
}

TEST(GeTest, test2) {
	Frac w(2, 3);
	ASSERT_NE(w.GetFracNum(), 5);
}

TEST(MinusTest, test3) {
	Frac st(-1, 4);
	ASSERT_EQ(-1, st.GetFracNum());
}

TEST(ZeroTest, test3) {
	Frac st(2, 1);
	ASSERT_NE(0, st.GetFracDen());
}

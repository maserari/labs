#include "gtest/gtest.h"
#include "../lab7/afterSecondTerm.h"


TEST(ForStudent, Getters) {
	Student a("zxc", 2, 1, 3);
	ASSERT_EQ(a.GetName(), "zxc");
	ASSERT_EQ(a.GetCourse(), 2);
	ASSERT_EQ(a.GetGroup(), 1);
	ASSERT_EQ(a.GetCredit_book(), 3);
}

TEST(ForStudent, CopyConstructor) {
	Student b("abc", 6, 2, 4);
	Student c(b);
	ASSERT_EQ(c.GetName(), "abc");
	ASSERT_EQ(c.GetCourse(), 6);
	ASSERT_EQ(c.GetGroup(), 2);
	ASSERT_EQ(c.GetCredit_book(), 4);
}

TEST(ForFirstTermStudent, GetMarkTest) {
	SecondStudent y("qwerty", 1, 8, 9, 7, 2, 4, 8);
	ASSERT_EQ(y.GetMark(1), 7);
	ASSERT_EQ(y.GetMark(2), 2);
	ASSERT_EQ(y.GetMark(3), 4);
	ASSERT_EQ(y.GetMark(4), 8);
}
TEST(ForFirstTermStudent, AverageMarkTest) {
	SecondStudent z("qwerty", 2, 4, 1, 9, 10, 3, 5);
	ASSERT_EQ(z.AverageMark(), 6.75);
}

TEST(ForSecondTermStudent, GetMarkTest) {
	ThirdStudent p("qwer", 1, 8, 9, 6, 5, 7, 10, 6);
	ASSERT_EQ(p.GetMark(1), 6);
	ASSERT_EQ(p.GetMark(2), 5);
	ASSERT_EQ(p.GetMark(3), 7);
	ASSERT_EQ(p.GetMark(4), 10);
	ASSERT_EQ(p.GetMark(5), 6);
}

TEST(ForSecondTermStudent, AverageMarkTest) {
	ThirdStudent t("asdfgh", 5, 4, 7, 9, 10, 7, 5, 10);
	ASSERT_EQ(t.AverageMark(), 8);
}

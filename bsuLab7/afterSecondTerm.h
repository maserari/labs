#include "afterFirstTerm.h"
class ThirdStudent : public SecondStudent
{
protected:
	int marks2[5];
public:
	ThirdStudent(const char* name, int course, int group, int credit_book, int first_mark, int second_mark, int third_mark, int fourth_mark, int fifh_mark);
	ThirdStudent(const ThirdStudent& obj);
	int GetMark(int mark_index);
	void SetMark(int mark_index, int value);
	friend std::ostream& operator<<(std::ostream& out, const ThirdStudent& Thstudent);
	double AverageMark() override;
};

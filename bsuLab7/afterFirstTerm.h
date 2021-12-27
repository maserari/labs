#pragma once
#include "mainStudent.h"
class SecondStudent : public Student
{
protected:
	int marks1[4];
public:
	SecondStudent(const char* name, int course, int group, int credit_book, int first_mark, int second_mark, int third_mark, int fourth_mark);
	SecondStudent(const SecondStudent& obj);
	int GetMark(int mark_index);
	void SetMark(int mark_index, int value);
	friend std::ostream& operator<<(std::ostream& out, const SecondStudent& Secstudent);
	virtual double AverageMark();
};
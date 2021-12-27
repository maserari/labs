#include "afterSecondTerm.h"
#include <iostream>
using namespace std;

ThirdStudent::ThirdStudent(const char* name, int course, int group, int credit_book, int first_mark, int second_mark, int third_mark, int fourth_mark, int fifh_mark) : SecondStudent((char*)name, (int)course, (int)group, (int)credit_book, (int) first_mark, (int) second_mark, (int) third_mark, (int) fourth_mark)
{
    marks2[0] = first_mark;
	marks2[1] = second_mark;
	marks2[2] = third_mark;
	marks2[3] = fourth_mark;
	marks2[4] = fifh_mark;
}

ThirdStudent::ThirdStudent(const ThirdStudent& obj) : SecondStudent(obj)
{
	for (int i = 0; i < 5; i++)
	{
		this->marks2[i] = obj.marks2[i];
	}
}

int ThirdStudent::GetMark(int mark_index)
{
	if (mark_index < 0 || mark_index > 5)
	{
		cout << "wrong index" << endl;
		return -1;
	}

	return marks2[mark_index - 1];
}

void ThirdStudent::SetMark(int mark_index, int mark)
{

	if (mark_index < 0 || mark_index > 5)
	{
		cout << "wrong index" << endl;
		return;
	}

	marks2[mark_index - 1] = mark;
}

ostream& operator<<(ostream& out, const ThirdStudent& Thstudent)
{
	out << "name: " << Thstudent.name << endl;
	out << "id: " << Thstudent.id << endl;
	out << "course: " << Thstudent.course << endl;
	out << "group: " << Thstudent.group << endl;
	out << "credit_book: " << Thstudent.credit_book << endl;
	for (int i = 0; i < 5; i++)
	{
		out << i + 1 << ".mark: " << Thstudent.marks2[i] << endl;
	}
	return out;
}

double ThirdStudent::AverageMark()
{
	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = sum + marks1[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		sum = sum + marks2[i];
	}
	sum = sum / 9;
	return sum;
}

#include <iostream>
#include "afterFirstTerm.h"
using namespace std;

SecondStudent::SecondStudent(const char* name, int course, int group, int credit_book, int first_mark, int second_mark, int third_mark, int fourth_mark) : Student((char*) name, (int)course, int(group), int(credit_book))
{
	marks1[0] = first_mark;
	marks1[1] = second_mark;
	marks1[2] = third_mark;
	marks1[3] = fourth_mark;
}

SecondStudent::SecondStudent(const SecondStudent& obj) : Student(obj)
{
	for (int i = 0; i < 4; i++)
	{
		this->marks1[i] = obj.marks1[i];
	}
}

int SecondStudent::GetMark(int mark_index)
{

	if (mark_index < 0 || mark_index > 4)
	{
		cout << "wrong index" << endl;
		return -1;
	}

	return marks1[mark_index - 1];
}

void SecondStudent::SetMark(int mark_index, int mark)
{

	if (mark_index < 0 || mark_index > 4)
	{
		cout << "wrong index" << endl;
		return;
	}
	
	marks1[mark_index - 1] = mark;
}

ostream& operator<<(ostream& out, const SecondStudent& Secstudent)
{
	out << "name: " << Secstudent.name << endl;
	out << "id: " << Secstudent.id << endl;
	out << "course: " << Secstudent.course << endl;
	out << "group: " << Secstudent.group << endl;
	out << "credit_book: " << Secstudent.credit_book << endl;
	for (int i = 0; i < 4; i++)
	{
		out << i + 1 << ".mark: " << Secstudent.marks1[i] << endl;
	}
	return out;

}

double SecondStudent::AverageMark()
{

	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = sum + marks1[i];
	}
	sum = sum / 4;
	return sum;
}
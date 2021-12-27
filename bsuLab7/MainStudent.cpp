#include "mainStudent.h"
#include <iostream>
using namespace std;

int Student::count = 0;

Student::Student(const char* name, int course, int group, int credit_book) :credit_book(credit_book)
{
	int length = strlen(name);
	this->name = new char [length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = name[i];
	}
	this->name[length] = '\0';
	this->course = course;
	this->group = group;
	count++;
	id = count;
}

Student::Student(const Student& obj) :credit_book(obj.credit_book)
{
	int size = strlen(obj.name);
	this->name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		this->name[i] = obj.name[i];
	}
	this->name[size] = '\0';
	
	this->course = obj.course;
	this->group = obj.group;           
}

Student::~Student()
{
	delete[] this->name;
}

void Student::SetName(const char* name)
{

	int size;
	size = strlen(name);
	this->name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		this->name[i] = name[i];
	}
	this->name[size] = '\0';
}

void Student::SetCourse(int course)
{
	this->course = course;
}

void Student::SetGroup(int group)
{
	this->group = group;
}

int Student::GetId()
{
	return id;
}

char* Student::GetName()
{

	return name;
}

int Student::GetCourse()
{
	return course;
}

int Student::GetGroup()
{
	return group;
}

int Student::GetCredit_book()
{
	return credit_book;
}

ostream& operator<<(ostream& out, const Student& student)
{
	out << "name: " << student.name << endl;
	out << "id: " << student.id << endl;
	out << "course: " << student.course << endl;
	out << "group: " << student.group << endl;
	out << "credit_book: " << student.credit_book << endl;
	return out;
} 

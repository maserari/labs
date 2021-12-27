#pragma once
#include <iostream>

class Student
{
private:
	Student() = delete;
protected:
	int id;
	char* name;
	int course;
	int group;
	const int credit_book;
private:
	static int count;
public:
	Student(const char* name, int course, int group, int credit_book);
	Student(const Student& obj);
	~Student();
	void SetName(const char* name);
	void SetCourse(int course);
	void SetGroup(int group);
	int	GetId();
	char* GetName();
	int GetCourse();
	int GetGroup();
	int GetCredit_book();
	friend std::ostream& operator<<(std::ostream& out, const Student& student);
};

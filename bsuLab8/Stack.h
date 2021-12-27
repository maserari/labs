#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int* arr;
public:
    Stack(int size)
    {
        top = -1;
        this->size = size;
        arr = new int[size];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void reSize(int value)
    {
        size++;
        top++;
        int* mas = new int[size];
        for (int i = 0; i < size; i++)
        {
            mas[i] = arr[i];
        }
        mas[size - 1] = value;
        delete[]arr;
        arr = mas;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int value)
    {

        if (top == size - 1)
        {
            reSize(value);
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            int popValue = arr[top - 1];
            top = top - 2;
            size = size - 2;
            reSize(popValue);
        }
    }

    void showTop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "element at top is: " << arr[top] << endl;
        }
        
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[pos];  
        }
    }

    void displayStack()
    {

        if(isEmpty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }

    void operator << (int value)
    {
        push(value);
    }

    void operator >> (int value)
    {
        pop();
    }

    void operator = (Stack& obj)
    {
        if (size < obj.size)
        {
            reSize(size);
            for (int i = 0; i < size; i++)
            {
                this->arr[i] = obj.arr[i];
            }
        }
        else
        {
            for (int i = 0; i < obj.size; i++)
            {
                this->arr[i] = obj.arr[i];
            }
        }
    }

    bool operator == (Stack& obj)
    {
        if (size == obj.size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator < (Stack& obj)
    {
        if (size < obj.size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator > (Stack& obj)
    {
        if (size > obj.size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int operator [](int index)
    {
        return peek(index);
    }
};


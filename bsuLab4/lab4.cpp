#include <iostream>
#include <string>
using namespace std;

char* allocateMem(int size);
void enterString(char* str, int size);
char* _strpbrk(char* str1, char* str2);
void funcB(char* str3);

int main()
{
    int size;

    cout << "Enter size of 1 string: ";
    cin >> size;
    char* str1 = allocateMem(size);

    cout << "Enter size of 2 string: ";
    cin >> size;
    char* str2 = allocateMem(size);

    char tst[1];
    cin.getline(tst, 1);

    enterString(str1, size);
    enterString(str2, size);

    char* ptr;
    ptr = _strpbrk(str1, str2);
    cout << ptr << endl;
   
    cout << "Enter size of string: ";
    cin >> size;
    char* str3 = allocateMem(size);
    cin.getline(tst, 1);
    enterString(str3, size);

    funcB(str3);
     



    delete[] str1;
    delete[] str2;
    delete[] str3;

}

char* allocateMem(int size)
{
    char* str = new char[size];
    return str;
}

void enterString(char* str, int size)
{
    cout << "Enter str: ";
    cin.getline(str, size);
}

char* _strpbrk(char* str1, char* str2)
{
    for (int i = 0; str2[i]; i++)
    {
        for (int j = 0; str1[j]; j++)
        {
            if (str2[i] == str1[j] && str1[j] != ' ')
            {
                return (&str1[j]);
            }
            else if (str2[i] == '\0')
            {
                return NULL;
            }
        }
        
    }
}

void funcB(char* str3)
{
    int count = 0;
    int x = 0;
    int ones = 0;
    int op = 1;

    int start_space = 0;
    int end_space = 0;

    int ones_pos_start = 0;
    int ones_pos_end = 0;

    int start_cords = 0;
    int end_cords = 0;

    for (int i = 0; str3[i]; i++)
    {
        if (str3[i] == ' ' || str3[i + 1] == '\0')
        {
            end_space = i;

            for (int j = start_space; j < end_space; j++)
            {
                if (str3[j] >= '0' && str3[j] <= '9')
                {
                    x++;
                    if (x == end_space - start_space)
                    {
                        for (int k = start_space; k < end_space; k++)
                        {

                            if (str3[k] == '1')
                            {
                                count++;

                            }

                        }

                        if (ones < count)
                        {
                            ones_pos_start = start_space;
                            ones_pos_end = end_space;
                            ones = count;

                        }
                        else if (ones == count)
                        {
                            op++;
                            if (op == 2)
                            {
                                start_cords = start_space;
                                end_cords = end_space;
                            }
                            else if (op == 1)
                            {
                                ones_pos_start = start_space;
                                ones_pos_end = end_space;
                                ones = count;
                            }
                            else if (op > 2)
                            {
                                ones_pos_start = start_cords;
                                ones_pos_end = end_cords;

                                start_cords = start_space;
                                end_cords = end_space;

                            }
                        }

                        j = end_space;
                    }

                }
                else
                {
                    j = end_space;
                }
            }
            x = 0;

            if (str3[i + 1] == '\0')
            {
                for (int m = ones_pos_start; m < ones_pos_end; m++)
                {
                    cout << str3[m];
                }
            }

            count = 0;
            start_space = end_space + 1;
            end_space = 0;
        }
    }
}
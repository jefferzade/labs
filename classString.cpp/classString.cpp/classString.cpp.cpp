#include "stdafx.h"
using namespace std;

class MyString
{
public:
     MyString(const char* str)
    {
        int length = strlen(str); //����� ��������� ���� ������ �������� � ���������� length
        this->str = new char[length + 1]; //�������� ������ ��� ������ �� ������� ������. �� ������� ������ ��-�� �������������� ����(\0)

        for (int i = 0; i < length; i++)
        {
            this->str[i] = str[i];//�������� �������� ������ �� ���������� ����� � ��� ������
        }
        this->str[length] = '\0';//�������� \0
    }
    ~MyString()
    {
        delete[] this->str;//���������� ����� ���������� ���� ������
    }

    MyString& operator= (const MyString& other)//���������� �������� ������������
    {
        if (this->str != nullptr) //�������� �� ������� �������. ���� �� �����, �� ������� ���
        {
            delete[] str;
        }
        int length = strlen(other.str);
        this->str = new char[length + 1];

        for (int i = 0; i < length; i++)
        {
            this->str[i] = other.str[i];
        }
        this->str[length] = '\0';

        return *this;
    }

    void Print()
    {
        cout << str << endl;
    }
private:
    char *str;
};



int main()
{
    MyString str("test");
    MyString str1("result");
    str = str1;
    str.Print();
    return 0;
}


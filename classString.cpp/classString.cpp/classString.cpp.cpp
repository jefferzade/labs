#include "stdafx.h"
using namespace std;

class MyString
{
public:
     MyString(const char* str)
    {
        int length = strlen(str); //длину введенной нами строки записали в переменную length
        this->str = new char[length + 1]; //выделили память под массив на единицу больше. На единицу больше из-за терминирующего нуля(\0)

        for (int i = 0; i < length; i++)
        {
            this->str[i] = str[i];//копируем элементы строки из введенного слова в наш массив
        }
        this->str[length] = '\0';//добавили \0
    }
    ~MyString()
    {
        delete[] this->str;//освободили ранее выделенную нами память
    }

    MyString& operator= (const MyString& other)//перегрузка операции присваивания
    {
        if (this->str != nullptr) //проверка на пустоту массива. если не пусто, то очищаем его
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


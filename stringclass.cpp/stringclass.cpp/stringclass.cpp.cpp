#include <iostream>
#include <cstring>
#include <filesystem>
#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

using namespace std;
//using std::swap(p1,p2);
class mystring
{
private:
	char* str;
	char* S;
	int size;
	int count;
public:
	//void swap(mystring &other);
	mystring(const char* str ="" , int _size = 0);
	mystring(const mystring& tmp);
	~mystring();
	mystring& operator=(const mystring& tmp)
	{
		if (this == &tmp) //для предотвращения присвоения самому себе
			return *this;
		mystring S(tmp); //временный объект для копирования
		this->swap(tmp);
		return *this;
	}

};
int main()
{
	
}


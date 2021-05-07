#pragma once
#include "TVector.h"
class TMatrix
{
	int size;
	TVector <TVector<int>> matr;
public:
	TMatrix(int _size = 0)
	{
		size = _size;
		matr = TVector <TVector<int>>(size);
		for (int i = 0; i < size;i++)
		{
			matr[i] = TVector<int>(size - i, i);
		}
	};
	TMatrix(const TMatrix& tmp)
	{
		size = tmp.size;
		matr = tmp.matr;
	};
	TMatrix& operator=(TMatrix tmp)
	{
		size = tmp.size;
		matr = tmp.matr;
		return *this;
	};
	~TMatrix() {};
	TVector<int>& operator[](int k)
	{
		TVector<int> zero;
		if ((k >= 0) && (k < size))
		{
			return matr[k];
		}
		else
		{
			return zero;
		}
	};
	TMatrix operator+(TMatrix tmp)
	{
		TMatrix result(*this);
		result.matr = result.matr + tmp.matr;
		return result;
	};
	TMatrix operator-(TMatrix tmp)
	{
		TMatrix result(*this);
		result.matr = result.matr - tmp.matr;
		return result;
	};
	TMatrix operator*(int k)
	{
		TMatrix result(*this);
		result.matr = result.matr * k;
		return result;
	};
	TMatrix operator*(TMatrix tmp)
	{
		int sum;
		TMatrix c(*this);
		for (int i = 0; i < size; i++)
		{
			for (int j = i; j < size; j++)
			{
				sum = 0;
				for (int k = i;k <= j;k++)
				{
					sum = sum + (*this)[i][k] * tmp[k][j];
				}
				c[i][j] = sum;
			}
		}
		return c;
	};
};


#pragma once
template <class T>
class TVector
{
private:
	T* mem;
	int size; //размер массива mem
	int start;
public:
	TVector(int _size = 0, int _start = 0) {
		size = _size;
		start = _start;
		mem = new T[size];
		for (int i = 0;i < size;i++) {
			mem[i] = T(0);
		}
	};
	~TVector() {
		if (size != 0) {
			delete[] mem;
		}
	};
	//ниже конструктор копирования
	TVector(const TVector& tmp) {
		size = tmp.size;
		start = tmp.start;
		mem = new T[size];
		for (int i = 0;i < size;i++) {
			mem[i] = tmp.mem[i];
		}
	};
	TVector& operator=(const TVector& tmp) {
		if (size != 0) {
			delete[] mem;
		}
		size = tmp.size;
		start = tmp.start;
		mem = new T[size];
		for (int i = 0; i < size;i++) {
			mem[i] = tmp.mem[i];
		}
		return *this;
	};
	T& operator[](int k) {
		T zero(0);
		if ((k >= start) && (k < size + start)) {
			return mem[k - start];
		}
		else {
			return zero;
		}
	};
	int GetSize() {
		return size;
	};
	int GetStart() {
		return start;
	};
	TVector operator+(const TVector& tmp) {
		TVector result(*this);
		if ((size == tmp.size) && (start == tmp.start)) {
			for (int i = 0; i < size;i++) {
				result.mem[i] = result.mem[i] + tmp.mem[i];
			}
		}
		return result;
	};
	TVector operator-(const TVector& tmp) {
		TVector result(*this);
		if ((size == tmp.size) && (start == tmp.start)) {
			for (int i = 0; i < size;i++) {
				result.mem[i] = result.mem[i] - tmp.mem[i];
			}
		}
		return result;
	};
	TVector operator*(int k) {
		TVector result(*this);
		for (int i = 0;i < size;i++) {
			result.mem[i] = result.mem[i] * k;
		}
		return result;
	};
	T operator*(TVector tmp) {
		T result(0);
		if ((size == tmp.size) && (start == tmp.start)) {
			for (int i = 0;i < size;i++) {
				result += tmp.mem[i] * mem[i];
			}
		}
		return result;
	};
};







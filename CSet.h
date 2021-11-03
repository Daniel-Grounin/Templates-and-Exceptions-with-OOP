#pragma once
#include <iostream>
using namespace std;

template <class T>
class CSet{
private:
	T* arr;
	int size;
	

public:
	CSet() :arr(nullptr) {};
	CSet(const CSet& cpy);
	~CSet() {};
	CSet& operator= (CSet <T>& c);
	CSet& operator+= (T& c);
	CSet& operator-= (T& r);
	CSet& UNION(const CSet& arr);
	friend ostream& operator<<(ostream& os, const CSet<T>& obj);
	bool isExist(T Val);
	int getSize();
};

template<class T>
inline bool CSet<T>::isExist(T Val){
	for (int i = 0; i < size; i++) {
		if (arr[i] == Val)
			return true;
	}
	return false;
}

template<class T>
inline int CSet<T>::getSize(){
	return size;
}

template<class T>
inline CSet<T>::CSet(const CSet<T>& cpy){
	this->arr = cpy.arr;
	this->size = cpy.size;
	return *this;
}

template<class T>
inline CSet<T>& CSet<T>::operator=(CSet <T>& c){
	size = c.size;
	arr = new T*[size];
	*arr = *(c.arr);
	for (int i = 0; i < size; i++) {
		arr[i] = c.arr[i];
	}
}

template<class T>
inline CSet<T>& CSet<T>::operator+=(T& c){
	if (isExist(c))
		return *this;
	T* newArr = new T[size+1];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}

	newArr[size++] = c;
	delete[] arr;
		arr = newArr;
		return *this;
}

template<class T>
inline CSet<T>& CSet<T>::operator-=(T& r){
	if (!isExist(r))
		return *this;
		T* newArr = new T[--size];
		for (int i = 0,j = 0; i < size + 1; i++) {
			if (arr[i] == r)
				continue;
				newArr[j++] = arr[i];
		}
		delete[] arr;
		arr = newArr;
		return *this;
}

template<class T>
inline CSet<T>& CSet<T>::UNION(const CSet<T>& arr){
	if (this == &arr)
		return *this;
	for (int i = 0;i <arr.size; i++) {
		*this += arr.arr[i];
	}
		return *this;
	
}

template<class T>
ostream& operator<<(ostream& os, const CSet<T>& obj){
	for (int i = 0; i < obj.size; i++) {
		os << "{" << obj.arr[i] << "}" << " , ";
	}
	return os;
}

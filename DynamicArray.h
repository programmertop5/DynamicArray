#pragma once
class DynamicArray
{
private:
	int* data;
	int n_size;
	int n_capacity;
public:
	DynamicArray();
	DynamicArray(int capacity);
	~DynamicArray();
	DynamicArray(const DynamicArray& other);

	void add(int value);
	void remove(int index);
	int get(int index);
	int size()const;
	int capacity()const;
	void print()const;

	int& operator[](int index);
	const int& operator[](int index)const;
	DynamicArray operator+(const DynamicArray& other)const;
	DynamicArray& operator+=(int value);
	DynamicArray& operator =(const DynamicArray& other);
	bool operator == (const DynamicArray& other)const;
};


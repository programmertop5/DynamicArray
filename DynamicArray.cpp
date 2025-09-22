#include "DynamicArray.h"
#include <iostream>
using namespace std;


DynamicArray::DynamicArray()
{
	n_capacity = 1;
	n_size = 0;
	data = new int[n_capacity];
}

DynamicArray::DynamicArray(int capacity_) {
    if (capacity_ <= 0) capacity_ = 1; 

    n_capacity = capacity_;
    n_size = 0;
    data = new int[n_capacity];
}

DynamicArray::~DynamicArray()
{
    delete[]data;
}

DynamicArray::DynamicArray(const DynamicArray& other) {
    n_size = other.n_size;
    n_capacity = other.n_capacity;
    data = new int[n_capacity];
    for (int i = 0; i < n_size; i++) {
        data[i] = other.data[i];
    }
}


void DynamicArray::add(int value) {
    if (n_size == n_capacity) {
        int newCapacity;
        if (n_capacity == 0) {
            newCapacity = 1; 
        }
        else {
            newCapacity = n_capacity * 2; 
        }

        int* newData = new int[newCapacity]; 
        for (int i = 0; i < n_size; i++) {
            newData[i] = data[i]; 
        }
        delete[] data;   
        data = newData; 
        n_capacity = newCapacity; 
    }

    data[n_size] = value; 
    n_size++;             
}


void DynamicArray::remove(int index) {
    if (index < 0 || index >= n_size) {
        return; 
    }

    for (int i = index; i < n_size - 1; i++) {
        data[i] = data[i + 1];
    }

    n_size--;
}


int DynamicArray::get(int index)
{
    if (index < 0 || index >= n_size) {
            return 0; 
        }
    return data[index];
}

int DynamicArray::size() const
{
    return n_size;
}

int DynamicArray::capacity() const
{
    return n_capacity;
}

void DynamicArray::print() const
{
    for (int i = 0;i < n_size;i++) {
        cout << data[i] << endl;
    }
}

int& DynamicArray::operator[](int index) {
    if (index < 0 || index >= n_size) {
        return data[0]; 
    }
    return data[index];
    // TODO: insert return statement here
}

const int& DynamicArray::operator[](int index) const
{
    if (index < 0 || index >= n_size) {
        return data[0];
    }
    return data[index];
    // TODO: insert return statement here
}


DynamicArray DynamicArray::operator+(const DynamicArray& other) const {
    DynamicArray result(n_size + other.n_size);
    
    for (int i = 0; i < n_size; i++) {
        result.add(data[i]);
    }

    
    for (int i = 0; i < other.n_size; i++) {
        result.add(other.data[i]);
    }

    return result;
    // TODO: insert return statement here
}

DynamicArray& DynamicArray::operator+=(int value)
{
    add(value);  
    return *this; 
    // TODO: insert return statement here
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other)
{
    if (this == &other) {
           return *this;
    }

        delete[] data;

       
    n_capacity = other.n_capacity;
    n_size = other.n_size;
    data = new int[n_capacity];

    for (int i = 0; i < n_size; i++) {
         data[i] = other.data[i];
    }

        return *this;
}

bool DynamicArray::operator==(const DynamicArray& other) const {
    
    if (n_size != other.n_size) {
        return false;
    }

   
    for (int i = 0; i < n_size; i++) {
        if (data[i] != other.data[i]) {
            return false; 
        }
    }

    return true; 
}












    









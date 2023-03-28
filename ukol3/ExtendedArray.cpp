#include "ExtendedArray.h"
#include <iostream>
using namespace std;

ExtendedArray::ExtendedArray(int length)
{
	this->length = length;
	this->array = new int[length];
	this->count = 0;
}

ExtendedArray::~ExtendedArray()
{
	delete[] this->array;
}

int ExtendedArray::getLength()
{
	return this->length;
}

int ExtendedArray::getCount()
{
	return this->count;
}

int ExtendedArray::getAt(int i)
{
	return array[i];
}

bool ExtendedArray::add(int n)
{
	if (this->count >= this->length) {
		return false;
	}
	else {
		this->array[this->count] = n;
		count++;
		return true;
	}
}

ExtendedArray* ExtendedArray::merge(ExtendedArray* array)
{
	ExtendedArray *result = new ExtendedArray( this->getCount() + array->getCount() );
	for (int i = 0; i < this->getCount(); i++) {
		result->add(this->getAt(i));
	}
	for (int i = 0; i < array->getCount(); i++) {
		result->add(array->getAt(i));
	}
	return result;
}

ExtendedArray* ExtendedArray::intersect(ExtendedArray* array)
{
	ExtendedArray* result = new ExtendedArray(min(this->getLength(), array->getLength()));
	for (int i = 0; i < this->getCount(); i++) {
		for (int j = 0; j < array->getCount(); j++) {
			if (this->getAt(i) == array->getAt(j)) {
				result->add(this->getAt(i));
			}
		}
	}
	return result;
}

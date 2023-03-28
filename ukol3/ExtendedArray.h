#pragma once


class ExtendedArray
{
private:
	int* array;
	int length;
	int count;
public:
	ExtendedArray(int length);
	~ExtendedArray();
	int getLength();
	int getCount();
	int getAt(int i);
	bool add(int n);
	ExtendedArray* merge(ExtendedArray* array);
	ExtendedArray* intersect(ExtendedArray* array);
};


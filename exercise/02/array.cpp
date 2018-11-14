#include <stdexcept>
#include "array.h"

array::array()
{
	p = nullptr;
	n = 0;
}

array::array(int size, double value)
{
	p = new double[size];
	for (int i = 0; i < size; ++i)
	{
		p[i] = value;
	}
	n = size;
}

void array::copy_impl(const array& other)
{
	p = new double[other.n];
	for (int i = 0; i < other.n; i++)
	{
		p[i] = other.p[i];
	}
	n = other.n;
}

array::array(const array& other)
{
	if (this != &other)
	{
		copy_impl(other);
	}
}

array::array(array&& other)
{
	p = other.p;
	n = other.n;

	other.p = nullptr;
	other.n = 0;
}

array::~array()
{
	delete[] p;
	p = nullptr;
	n = 0;
}

int array::size() const
{
	return n;
}


void check_index_range(int index, int min, int max)
{
	if (index < min || index > max)
	{
		throw std::out_of_range("index is out of range");
	}
}

double array::at(int index) const
{
	check_index_range(index, 0, n - 1);
	return p[index];
}

array& array::operator=(const array& other)
{
	if (this != &other)
	{
		delete[] p;
		copy_impl(other);
	}
	return *this;
}

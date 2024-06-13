#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cmath>
#include <time.h>

template<typename T>
class Array
{
    private:
        T *arr;
        unsigned int arr_len;
    public:
        Array()
		{
            this->arr_len = 0;
            this->arr = new T[this->arr_len];
        }

        Array(unsigned int len)
		{
            this->arr_len = len;
            this->arr = new T[this->arr_len];
        }
        
        Array(const Array &cpy)
		{
            this->arr_len = cpy.arr_len;
            this->arr = new T[this->arr_len];
            for (unsigned int i = 0; i < this->arr_len; i++)
                this->arr[i] = cpy.arr[i];
        }

        Array &operator = (const Array &cpy)
		{
            this->arr_len = cpy.arr_len;
            this->arr = new T[this->arr_len];
            for (unsigned int i = 0; i < this->arr_len; i++)
                this->arr[i] = cpy.arr[i];
            return (*this);
        }

        T &operator [] (unsigned  int index)
		{
            if (index >= this->arr_len || index < 0)
                throw (std::out_of_range("Index out of range"));
            else
                return (this->arr[index]);
        }

        ~Array() { delete[] arr; }
};

#endif
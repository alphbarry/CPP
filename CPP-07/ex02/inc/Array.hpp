#pragma once 
#include <iostream>

template <typename T>
class Array {
	private:
		T* _array;
		size_t _size;
	public:
		Array();
		~Array();
		Array(const Array& other);
		Array& operator=(const Array& other);
		Array(size_t size);

		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t size() const;

		class OutOfBoundsException : public std::exception {
			public:
				const char* what() const noexcept override;
		};
};

#include "Array.tpp"

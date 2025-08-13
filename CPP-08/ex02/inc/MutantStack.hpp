#pragma once

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &other) : std::stack<T>(other){}
		MutantStack &operator=(const MutantStack &other) {
			if (this != &other) {
				std::stack<T>::operator=(other);
			}
			return *this;
		}
		virtual ~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;\
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin() {
			return std::stack<T>::c.begin();
		}
		const_iterator begin() const {
			return std::stack<T>::c.begin();
		}
		iterator end() {
			return std::stack<T>::c.end();
		}
		const_iterator end() const {
			return std::stack<T>::c.end();
		}
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:50:16 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/23 16:09:22 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <stdexcept>

template <typename T> class Array
{
private:
		unsigned int _size;
		T *_content;
public:
	Array();
	Array(unsigned int n);
	Array(Array &other);
	~Array();
	Array &operator=(Array &other);
	T &operator[](unsigned int index);
	unsigned int size() const;
};

template <typename T>
Array<T>::Array() : _size(0), _content(new T[0]()) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _content(new T[n]()) {}

template <typename T>
Array<T>::Array(Array &other)
{
	this->_size = other._size;
	this->_content = new T[this->_size]();
	for (size_t i = 0; i < this->_size; ++i)
		this->_content[i] = other._content[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_content;
}

template <typename T>
Array<T> &Array<T>::operator=(Array &other)
{
	delete this->_content;
	this->_size = other._size;
	this->_content = new T[this->_size]();
	for (size_t i = 0; i < this->_size; ++i)
		this->_content[i] = other._content[i];
}
template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= this->_size)
		throw std::out_of_range("Out of range!!!!");
	return this->_content[index];
}

#endif

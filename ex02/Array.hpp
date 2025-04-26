/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:35:02 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/26 16:38:58 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstddef>

template<typename T>
class Array{
	private:
		T *arr;
		unsigned int s;
	public:
		Array();
		Array(const unsigned int);
		Array(const Array &);
		~Array();

		Array &operator=(const Array &);
		T operator[](unsigned int);
		int size(void) const;
		class OutOfRangeException: public std::exception{
			const char *what() const throw(){return ("Exception: out of range");}
		};
};

template<typename T>
T Array<T>::operator[](unsigned int i){
	try{
		if (i < s)
			return (arr[i]);
		else
			throw(OutOfRangeException());
	}
	catch(std::exception e){
		std::cout << e.what() << std::endl;
		return (0);
	}
}

template<typename T>
Array<T>::~Array(){
	delete[] arr;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other){
	if (this != &other){
		delete[] arr;
		arr = new T[other.s];
		s = other.s;
		for (int i = 0; i < other.s; i++){
			arr[i] = other.arr[i];
		}
	}
	return (*this);
}

template<typename T>
int Array<T>::size(void) const{
	return (s);
}

template<typename T>
Array<T>::Array(){
	arr = new T[0];
	s = 0;
}

template<typename T>
Array<T>::Array(const unsigned int si){
	arr = new T[si];
	s = si;
	for (unsigned int i = 0; i < si; i++){
		arr[i] = T();//inicializacion explicita
	}
}

template<typename T>
Array<T>::Array(const Array & other){
	delete[] arr;
	arr = new T[other.s];
	s = other.s;
	for (int i = 0; i < other.s; i++){
		arr[i] = other.arr[i];
	}
}

//#include "Array.tpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:31:40 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/04 13:44:55 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
T Array<T>::operator[](unsigned int i){
	try{
		if (i < s){
			return (arr[i]);
		}
		else
			throw(OutOfRangeException());
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
		return T();
	}
}

template<typename T>
Array<T>::~Array(){
	delete[] arr;
}	

template<typename T>
void Array<T>::setArr(T &a, unsigned int i){
	try{
		if (i < this->s){
			arr[i] = a;
		}
		else
			throw(OutOfRangeException());
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
		return ;
	}
}	

template<typename T>
Array<T> &Array<T>::operator=(const std::string &s){
	this->arr[0] = s;
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
		arr[i] = T();
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
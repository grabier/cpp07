/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:35:02 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/04 13:41:47 by gmontoro         ###   ########.fr       */
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

		void setArr(T &, unsigned int);
		Array &operator=(const Array &);
		Array<T> &operator=(const std::string &s);
		T operator[](unsigned int);
		int size(void) const;
		class OutOfRangeException: public std::exception{
			const char *what() const throw(){return ("Exception: out of range");}
		};
};

#include "Array.tpp"
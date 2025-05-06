/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:36:18 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/06 10:49:36 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void){

	Array<std::string> a((unsigned int)4);
	std::string s = "cagoendios";
	a.setArr(s, 0);
	s = "mesanolvidao";
	a.setArr(s, 1);
	s = "los macarrrones";
	a.setArr(s, 2);
	s = "fak";
	a.setArr(s, 3);

	std::cout << "a[0]: " << a[0] << std::endl;
	std::cout << "a[1]: " << a[1] << std::endl;
	std::cout << "a[2]: " << a[2] << std::endl;
	std::cout << "a[3]: " << a[3] << std::endl;
	std::cout << "a[4]: " << a[4] << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:40:15 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/23 19:55:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"

int main(void){
	int i1 = 9;
	int i2 = 75;
	
	char c1 = 'K';
	char c2 = '*';
	
	float f1 = 8.5;
	float f2 = -4.5;
	
	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	
	std::cout <<"max int is: " <<  ::max(i1, i2) << std::endl;
	std::cout <<"max char is: " <<  ::max(c1, c2) << std::endl;
	std::cout <<"max float is: " <<  ::max(f1, f2) << std::endl;
	std::cout <<"max string is: " <<  ::max(s1, s2) << std::endl << std::endl;

	std::cout <<"min int is: " <<  ::min(i1, i2) << std::endl;
	std::cout <<"min char is: " <<  ::min(c1, c2) << std::endl;
	std::cout <<"min float is: " <<  ::min(f1, f2) << std::endl;
	std::cout <<"min string is: " <<  ::min(s1, s2) << std::endl << std::endl;
	
	std::cout << "Before swap: i1 = " << i1 << " i2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "After swap: i1 = " << i1 << " i2 = " << i2 << std::endl << std::endl;

	std::cout << "Before swap: f1 = " << f1 << " f2 = " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "After swap: f1 = " << f1 << " f2 = " << f2 << std::endl << std::endl;

	std::cout << "Before swap: c1 = " << c1 << " c2 = " << c2 << std::endl;
	::swap(c1, c2);
	std::cout << "After swap: c1 = " << c1 << " c2 = " << c2 << std::endl << std::endl;

	std::cout << "Before swap: s1 = " << s1 << " s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "After swap: s1 = " << s1 << " s2 = " << s2 << std::endl;
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:59:19 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/24 19:27:45 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

template<typename T>
void show(T a){
	std::cout << a << std::endl;
}

void f(int i){
	std::cout << "i: " << i << std::endl;
}

int main(void){
	
	int iarr[5] = {1, 2, 3, 4, 5};
	iter(iarr, 5, show<int>);
	//show(iarr[0]);
	return (0);
}
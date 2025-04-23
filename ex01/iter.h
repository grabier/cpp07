/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:59:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/23 20:29:16 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
T sum(T a){

	return (a + 1);
}

template<typename T>
T min(T a, T b){
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
void swap(T &a, T &b){
	T aux;
	aux = a;
	a = b;
	b = aux;
}

template<typename T, typename F>
void iter(T (&a), int L, void (*f)(F)){
	for (int i = 0; i < L; i++){
		f(a[i]);
	}
}

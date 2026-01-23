/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:23:44 by max               #+#    #+#             */
/*   Updated: 2026/01/23 13:02:16 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstddef>

template <typename T, typename F>
void iter(T *array, const size_t len, F func) {
	if (!array)
		return;
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T, typename F>
void iter(T const *array, const size_t len, F const func) {
	if (!array)
		return;
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}
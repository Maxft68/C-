/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:23:44 by max               #+#    #+#             */
/*   Updated: 2026/01/12 18:43:19 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename Func>
void iter(T *array, size_t len, void (*func)(T array)) {
    if (!array)
        return;
    for (int i = 0; i < len; i++) {
        func(array[i]);
    }
}
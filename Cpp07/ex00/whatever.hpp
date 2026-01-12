/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:15:47 by max               #+#    #+#             */
/*   Updated: 2026/01/12 18:24:07 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const& min(T const& a, T const& b) {
    return (a < b) ? a : b;
}

template <typename T>
T const& max(T const& a, T const& b) {
    return (a > b) ? a : b;
}

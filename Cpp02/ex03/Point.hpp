/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:57:23 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/20 18:12:09 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ostream>
#include <cmath>
#include "Fixed.hpp"

class Fixed;

class Point{
	private:
		const Fixed x;
		const Fixed y;
};
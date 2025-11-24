/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:57:23 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/24 15:46:54 by max              ###   ########.fr       */
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
	public:
		Point();
		Point(const float x_coord, const float y_coord);
		Point(const Point& copy);
		~Point();
		Point& operator=(const Point & other);

		Fixed getX(void) const;
		Fixed getY(void) const;
};


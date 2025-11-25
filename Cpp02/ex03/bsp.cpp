/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:38:06 by max               #+#    #+#             */
/*   Updated: 2025/11/25 12:17:03 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (((point.getX() == a.getX()) && (point.getY() == a.getY())) || //if point is a or b or c
        ((point.getX() == b.getX()) && (point.getY() == b.getY())) ||
        ((point.getX() == c.getX()) && (point.getY() == c.getY())))
        return (std::cout << "Point is on an other point" << std::endl, false);

    float px = point.getX().toFloat();
    float py = point.getY().toFloat();
    float ax = a.getX().toFloat();
    float ay = a.getY().toFloat();
    float bx = b.getX().toFloat();
    float by = b.getY().toFloat();
    float cx = c.getX().toFloat();
    float cy = c.getY().toFloat();
    
    float tolerance = 0.00001f;
    float areaABC = 0.5 * std::fabs(ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)); //fabs = absolute value for float
    float areaPAB = 0.5 * std::fabs(px * (ay - by) + ax * (by - py) + bx * (py - ay));
    float areaPBC = 0.5 * std::fabs(px * (by - cy) + bx * (cy - py) + cx * (py - by));
    float areaPCA = 0.5 * std::fabs(px * (cy - ay) + cx * (ay - py) + ax * (py - cy));

    if (areaABC == 0 || areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
        return (std::cout << "Point is on an edge" << std::endl, false);
    if (areaABC - (areaPAB + areaPBC + areaPCA) < tolerance && areaABC - (areaPAB + areaPBC + areaPCA) > -tolerance) //with tolerance
        return true;
    std::cout << "areaABC: " << areaABC << ", areaPAB + areaPBC + areaPCA: " << (areaPAB + areaPBC + areaPCA) << std::endl;

    return (std::cout << "Point is outside the triangle" << std::endl, false);
}

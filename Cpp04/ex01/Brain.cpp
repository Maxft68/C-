/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:12:16 by max               #+#    #+#             */
/*   Updated: 2025/11/29 18:06:44 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << GREEN_RESET("Brain Default constructor called") <<  std::endl;
    for (int i = 0; i < BRAIN_IDEAS_SIZE; i++){
        ideas[i] = "Empty idea";
    }
}

Brain::Brain(const Brain& copy){
    std::cout << GREEN_RESET("Brain Copy constructor called") <<  std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Assignment operator called" <<  std::endl;
    if (this != &other){
        for (int i = 0; i < BRAIN_IDEAS_SIZE; i++){
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout << RED_RESET("Brain Destructor called") <<  std::endl;
}

void Brain::setIdea(int index, const std::string& idea){
    if (index < 0 || index >= BRAIN_IDEAS_SIZE){
        std::cerr << "Index out of range" << std::endl;
        return;
    }
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const{
    if (index < 0 || index >= BRAIN_IDEAS_SIZE){
        std::cerr << "Index out of range" << std::endl;
        return ("");
    }
    return (ideas[index]);
}


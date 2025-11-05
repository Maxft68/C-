/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:33:45 by max               #+#    #+#             */
/*   Updated: 2025/11/05 13:49:48 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replaceInFile(const std::string& filename, std::string s1, std::string s2){
    std::ifstream file((filename.c_str()));
    if (!file.is_open()){
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::ofstream temp((filename + ".replace").c_str());
    if (!temp.is_open()){
        std::cerr << "Error: Could not create temporary file" << std::endl;
        file.close();
        return;
    }
    std::string str;
    while (std::getline(file, str)){
        size_t pos = 0;
        while ((pos = str.find(s1, pos)) != std::string::npos){
            str.erase(pos, s1.length());
            str.insert(pos, s2);
            pos += s2.length();
        }
        temp << str << std::endl;
    }    
    file.close();
    temp.close();
}
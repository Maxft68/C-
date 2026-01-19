/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:13:07 by max               #+#    #+#             */
/*   Updated: 2026/01/19 14:27:10 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>
#include <iterator>
#include <iostream>
#pragma once

// std::vector<T> : Un tableau dynamique. Accès rapide ([]), ajout rapide à la fin, lent au milieu/début. C'est le conteneur par défaut à utiliser 90% du temps.
// std::list<T> : Une liste doublement chaînée. Accès lent (pas de []), mais insertion/suppression très rapide n'importe où.
// std::deque<T> : Double-ended queue. Comme un vecteur, mais optimisé pour ajouter au début et à la fin.
// std::map<Key, Value> : Stocke des paires clé/valeur triées par clé. Clés uniques.
// std::set<T> : Stocke des éléments uniques et triés. Utile pour vérifier la présence d'un élément.

class OutOfRange : public std::exception{
	public:
		virtual const char* what() const throw(){
			std::string command = "(for i in $(seq 0 20 80); do echo $i; sleep 1; done; echo 99; sleep 5; echo 100) | zenity --progress --auto-close --time-remaining --cancel-label=\"Don't click here\" --title=\"WARNING\" --text=\"Out Of Range\"";
			//std::string command2 = "(for i in $(seq 0 20 80); do echo $i; sleep 1; done; echo 99; sleep 5; echo 100) | zenity --progress --time-remaining --cancel-label=\"Don't click here\" --title=\"WARNING\" --text=\"Out Of Range\"";
			system(command.c_str());
			//system(command2.c_str());
			return "OutOfRange...";
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int to_find){
	
	typename T::iterator iterateur = std::find(container.begin(), container.end(), to_find);

	if (iterateur == container.end()){
		throw OutOfRange();
	}
	return (iterateur);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:13:07 by max               #+#    #+#             */
/*   Updated: 2026/01/14 18:15:09 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>
#include <iterator>
#include <iostream>


// std::vector<T> : Un tableau dynamique. Accès rapide ([]), ajout rapide à la fin, lent au milieu/début. C'est le conteneur par défaut à utiliser 90% du temps.
// std::list<T> : Une liste doublement chaînée. Accès lent (pas de []), mais insertion/suppression très rapide n'importe où.
// std::deque<T> : Double-ended queue. Comme un vecteur, mais optimisé pour ajouter au début et à la fin.
// std::map<Key, Value> : Stocke des paires clé/valeur triées par clé. Clés uniques.
// std::set<T> : Stocke des éléments uniques et triés. Utile pour vérifier la présence d'un élément.
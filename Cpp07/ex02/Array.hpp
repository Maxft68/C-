/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:06:28 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/13 16:12:45 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array {

	private:
		T* _data;
		unsigned int _size;
	public:
		Array() : 	_data(NULL), _size(0){}
		
		Array(unsigned int n) : _data(new T[n]) , _size(n){}
		
		Array(const Array& copy){
			_size = copy._size;
			_data = new T[_size];
			
			for (unsigned int i = 0; i < _size; i++){
				_data[i] = copy._data[i];
			}
		}
		
		Array& operator=(const Array& other){
			if (this != &other){
				if (_data)
					delete [] this->_data;
				_size = other._size;
				_data = new T[_size];
				
				for (unsigned int i = 0; i < _size; i++){
					_data[i] = other._data[i];
				}
			}
			return(*this);
		}
		
		~Array(){
			if (_data)
				delete [] _data;
		}
		
		class outOfBounds : public std::exception{
			public:
				virtual const char* what() const throw(){
						return("Out of Bounds");
				}
		};
		
		T& operator[](unsigned int index) const{ 
			if(index >= this->_size || index < 0)
				throw outOfBounds();
			return(_data[index]);
		}
		
		unsigned int size() const{
			return(_size);
		}
};


// int array[taille];

// int *array = malloc(sizeof(int * taille));

// while (array[i])
// 	free array[i]
// free array;
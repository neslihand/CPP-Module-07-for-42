/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:25:53 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/07 14:12:11 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename A>

Array<A>::Array(): data(NULL), data_size(0){
    std::cout << "Default Constructor Called!" << std::endl;
}

template <typename A>

Array<A>::Array(int _size){
    std::cout << "Constructor Called!" << std::endl;
    if (_size <= 0)
        throw std::out_of_range("Invalid size");

    data_size = _size;
    try{
        data = new A[data_size];
    }
    catch(const std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}

template <typename A>

Array<A>::Array(const Array& other){
    std::cout << "Copy Constructor Called!" << std::endl;
    data_size = other.data_size;
    if (data_size > 0){
        try{
            data = new A[data_size];
            for(unsigned int i = 0; i < data_size; i++)
                data[i] = other.data[i];
        }
        catch(const std::exception& e){
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
}

template <typename A>

Array<A>& Array<A>::operator=(const Array& other){
    std::cout << "Assignment Operator Called!" << std::endl;
    if (this != &other && other.data_size > 0){
        delete[] data;
        data_size = other.data_size;
        try
        {
            data = new A[data_size];
            for(unsigned int i = 0; i < data_size; i++)
                data[i] = other.data[i];
        }
        catch(const std::exception& e){
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    return *this;
}

template <typename A>

A& Array<A>::operator[](unsigned int index){
    if (index >= data_size)
        throw std::out_of_range("Index out of bounds");
    return data[index];
}
 
template <typename A>

Array<A>::~Array(){
    std::cout << "Destructor Called!" << std::endl;
    delete[] data;
}

template <typename A>

unsigned int Array<A>::size() const{
    return data_size;
}

template <typename A>

const A& Array<A>::operator[](unsigned int index) const {
    if (index >= data_size || index <= 0)
        throw std::out_of_range("Index out of bounds");
    return data[index];
}

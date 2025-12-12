/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:25:46 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/07 13:36:47 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename A>

class Array
{
    private:
        A* data;
        unsigned int data_size;
    public:
        Array();
        Array(int _size);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        A& operator[](unsigned int index);
        const A& operator[](unsigned int index) const;
        unsigned int size() const;
};

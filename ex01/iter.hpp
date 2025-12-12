/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:25:23 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/04 18:25:37 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename F>

void iter(T array[], size_t len, F func){
    size_t i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}

template <typename T, typename F>

void iter(const T array[], size_t len, F func){
    size_t i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}
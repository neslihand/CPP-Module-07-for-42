/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:25:19 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/04 18:25:21 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

template <typename T>

void swap(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>

T min(T& a, T& b){
    return (a < b ? a : b);
}

template <typename T>

T max(T& a, T& b){
    return (a > b ? a : b);
}
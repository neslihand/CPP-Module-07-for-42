/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:25:27 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/07 16:55:30 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& x) {
    std::cout << x << std::endl;
}

template <typename T>
void doubleValue(T& x) {
    x = x * 2;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    std::cout << "Before doubling:\n";
    iter(arr, 4, print<int>);

    iter(arr, 4, doubleValue<int>);

    std::cout << "After doubling:\n";
    iter(arr, 4, print<int>);

    const std::string strs[] = {"one", "two", "three"};
    std::cout << "\nString array:\n";
    iter(strs, 3, print<std::string>);
}

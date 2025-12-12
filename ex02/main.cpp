/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:26:00 by ndogan            #+#    #+#             */
/*   Updated: 2025/08/07 17:11:49 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

void testIntArray(){
     try
     {
        std::cout << "\n------- Int Array Test -------\n\n";
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;
    
        Array<int> arr2(3);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        for (unsigned int i = 0; i < arr2.size(); i++) {
            arr2[i] = i * 10;
        }

        Array<int> arr3(arr2);
        std::cout << "arr3[2]: " << arr3[2] << std::endl;

        Array<int> arr4;
        arr4 = arr3;
        std::cout << "arr4[3]: " << arr4[2] << std::endl;

        arr4[1] = 42;

        for (unsigned int i = 0; i < arr4.size(); i++){
            std::cout << "\n\narr3[" << i << "]: " << arr3[i] << std::endl;
            std::cout << "arr4[" << i << "]: " << arr4[i] << std::endl;
        }
    
        const Array<int> arr5(3);
        ///arr5[1] = 5;
        std::cout << "arr5[1]: " << arr5[1] << std::endl;

     }
     catch(const std::exception& e)
     {
        std::cerr << "Error: " << e.what() << std::endl;
     }
}

void testStringArray() {
    try {
        std::cout << "\n\n------- String Array Test -------\n";

        Array<std::string> strArray(3);

        strArray[0] = "Merhaba";
        strArray[1] = "Dünya";
        strArray[2] = "!";

        for (unsigned int i = 0; i < strArray.size(); ++i) {
            std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
        }

        std::cout << "Geçersiz indeks testi (strArray[3]):" << std::endl;
        std::cout << strArray[3] << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
   testIntArray();
   testStringArray();
}

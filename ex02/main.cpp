/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:11:36 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/07 13:16:34 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	// Initialize the string variable
	std::string string = "HI THIS IS BRAIN";

	// Create a pointer to the string
	std::string *stringPTR = &string;

	// Create a reference to the string
	std::string &stringREF = string;
	
	// Print memory addresses
	std::cout << "\nMemory addresses:" << std::endl;
	std::cout << "• Original string: " << &string << std::endl;
	std::cout << "• Pointer address: " << stringPTR << std::endl;
	std::cout << "• Reference address: " << &stringREF << std::endl;

	// Print values
	std::cout << "\nValues:" << std::endl;
	std::cout << "• Original string: " << string << std::endl;
	std::cout << "• Pointer value: " << *stringPTR << std::endl;
	std::cout << "• Reference value: " << stringREF << std::endl;

	return (0);
}

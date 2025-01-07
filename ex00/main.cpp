/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:12:02 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/07 13:12:03 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Stack allocation
	std::cout << "Creating zombie on stack:" << std::endl;
	randomChump("Stack Zombie");

	// Heap allocation
	std::cout << "\nCreating zombie on heap:" << std::endl;
	Zombie *heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();
	delete heapZombie;

	return 0;
}

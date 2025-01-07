/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:11:53 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/07 13:11:54 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int		hordeSize;
	Zombie	*horde;

	hordeSize = 5;
	horde = zombieHorde(hordeSize, "Walker");
	if (horde)
	{
		// Announce all zombies
		for (int i = 0; i < hordeSize; i++)
		{
			std::cout << "Zombie " << i + 1 << " announces: ";
			horde[i].announce();
		}
		// Clean up the horde
		delete[] horde;
	}
	return (0);
}

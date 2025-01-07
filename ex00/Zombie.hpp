/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:11:56 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/07 13:11:57 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

// Function declarations
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

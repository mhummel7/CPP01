/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:18:54 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/09 11:37:10 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{	private:
		std::string name;
		Weapon *weapon; // Pointer because HumanB might not always have a weapon

	public:
		HumanB(const std::string &name);

	void setWeapon(Weapon &weapon);
	void attack() const;
};

#endif

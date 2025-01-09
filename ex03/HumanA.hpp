/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:18:35 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/09 11:37:13 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon; // Reference because HumanA will always have a weapon

	public:
		HumanA(const std::string &name, Weapon &weapon);

	void attack() const;
};

#endif

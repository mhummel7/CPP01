/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:38:47 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/09 12:37:56 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &initialType) : type(initialType)
{
}

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &newType)
{
	type = newType;
}

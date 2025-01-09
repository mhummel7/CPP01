/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:47:46 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/09 13:10:42 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	FileReplacer fileReplacer(argv[1], argv[2], argv[3]);
	if (!fileReplacer.replace())
		return (1);
	return (0);
}
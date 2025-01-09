/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:49:45 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/09 13:09:23 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <iostream>
# include <fstream>

class FileReplacer
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		FileReplacer(std::string filename, std::string s1, std::string s2);
		bool replace();
};

#endif

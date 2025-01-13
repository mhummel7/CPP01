/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:49:05 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/13 11:19:42 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string filename, std::string s1,
	std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

bool FileReplacer::replace()
{
	if (_s1.empty())
	{
		std::cout << "Error: empty search string" << std::endl;
		return (false);
	}
	std::ifstream inFile(_filename.c_str());
	if (!inFile.is_open())
	{
		std::cout << "Error: could not open input file" << std::endl;
		return (false);
	}
	std::string content;
	std::string line;
	bool found = false;

	while (std::getline(inFile, line))
	{
		content += line;
		if (!inFile.eof())
			content += '\n';
		if (line.find(_s1) != std::string::npos)
			found = true;
	}
	if (!found)
	{
		inFile.close();
		std::cout << "Error: search string not found in file" << std::endl;
		return (false);
	}
	std::ofstream outFile((_filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		inFile.close();
		std::cout << "Error: could not create output file" << std::endl;
		return (false);
	}
	size_t pos = 0;
	while ((pos = content.find(_s1, pos)) != std::string::npos)
	{
		content.erase(pos, _s1.length());
		content.insert(pos, _s2);
		pos += _s2.length();
	}
	outFile << content;
	inFile.close();
	outFile.close();
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:54:09 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/12 14:14:21 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

void	my_replace(std::string &line, std::string &s1, std::string &s2)
{
	size_t pos = 0;
	while((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid parameters, they will be <filename> s1 s2\n";
		return 1;
	}
	if (std::string(argv[2]).length() == 0 || std::string(argv[3]).length() == 0)
	{
		std::cout << "No empty string please !\n";
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Can't open " << filename << "\n";
		return 1;
	}
	std::string new_file = filename + ".replace";
	std::ofstream outputFile(new_file.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Can't open " << new_file << "\n";
		inputFile.close();
		return 1;
	}
	std::string line;
	while(std::getline(inputFile, line))
	{
		my_replace(line, s1, s2);
		outputFile << line << "\n";
	}
	inputFile.close();
	outputFile.close();
}

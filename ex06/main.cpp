/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:53:49 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/13 11:11:35 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac < 2)
	{
		std::cout << "Enter a message please !\n";
		return 1;
	}
	std::string param = av[1];
	std::string message[4] = {"DEBUG","WARNING", "INFO", "ERROR"};
	int result = -1;
	for (int i = 0; i != 4 ; i++)
	{
		if (param.compare(message[i]) == 0)
			result = i;
	}
	switch (result)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			break;
		case 1:
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			break;
		case 2:
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
			break;
		case 3:
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:36:37 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/12 15:53:40 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl() {};

void Harl::debug()
{
	std::cout << "The program don't work because of a bug !\n"; 
}

void Harl::info()
{
	std::cout << "A bug enters into my computer !\n";
}

void Harl::warning()
{
	std::cout << "THIS PC IS ABOUT TO BURN !\n";
}

void Harl::error()
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA FIRE !\n";
}

void	Harl::complain(std::string level)
{
	void (Harl::*ptr_type[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i != 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_type[i])();
			break ;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:43:32 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/14 12:17:28 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(&weapon)
{
	return;
}

HumanA::~HumanA() {};


void HumanA::attack()
{
	std::cout << this->_name << " attack with their "
		<< this->_weapon->getType() << "\n";
	return;
}
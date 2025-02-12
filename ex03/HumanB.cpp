/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:43:32 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/12 11:46:48 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::setWeapon(Weapon &sword)
{
	this->_sword = &sword;
}

void HumanB::attack()
{
	std::cout << this->_name << " attack with their "
		<< this->_sword->getType() << "\n";
	return;
}
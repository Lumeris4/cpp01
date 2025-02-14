/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:43:32 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/14 12:19:18 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) ,_sword(NULL)
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
    if (this->_sword != NULL)
        std::cout << this->_name << " attacks with their "
                  << this->_sword->getType() << "\n";
    else 
        std::cout << this->_name << " attack with noting!\n";
    return;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:14:06 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/12 11:48:19 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string& Weapon::getType()
{
	return this->_type;
}


void Weapon::setType(std::string type)
{
	this->_type = type;
}
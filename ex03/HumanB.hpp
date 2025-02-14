/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:34:54 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/14 11:54:10 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:

	std::string _name;
	Weapon *_sword;

	public:

	HumanB(const std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &sword);
};
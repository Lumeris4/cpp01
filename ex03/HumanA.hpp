/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:34:54 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/13 08:54:17 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:

	std::string _name;
	Weapon *_weapon;

	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void);
};
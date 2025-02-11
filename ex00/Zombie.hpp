/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:06:35 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/11 14:18:50 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
	
	std::string _name;
	
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
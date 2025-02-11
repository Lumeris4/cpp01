/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:59:06 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/11 15:21:46 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	private:
	
	std::string _name;
	
	public:
	Zombie();
	~Zombie();

	void announce(void);
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name);
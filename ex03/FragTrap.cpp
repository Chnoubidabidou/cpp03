/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:47:27 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/13 11:40:13 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hp = 100;
	this->_stam = 100;
	this->_atk = 30;
	std::cout << "FragTrap created with default constructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	this->_hp = 100;
	this->_stam = 100;
	this->_atk = 30;
	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap " << this-> _name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	this->_name = fragTrap._name;
	this->_hp = fragTrap._hp;
	this->_stam = fragTrap._stam;
	this->_atk = fragTrap._atk;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_hp > 0)
		std::cout << "FragTrap " << this->_name << " gives you a high five!" << std::endl;
}

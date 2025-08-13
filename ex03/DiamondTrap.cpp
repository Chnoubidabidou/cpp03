/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:13:15 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/13 11:40:52 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name"), _name("default")
{
	this->_hp = 100;
	this->_stam = 50;
	this->_atk = 30;
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hp = 100;
	this->_stam = 50;
	this->_atk = 30;
	std::cout << "DiamondTrap " << this->_name << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap " << this->_name << " has been copied." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->ClapTrap::_name = diamondTrap.ClapTrap::_name;
	this->_hp = diamondTrap._hp;
	this->_stam = diamondTrap._stam;
	this->_atk = diamondTrap._atk;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hp)
		std::cout << "My name is:  " << this->_name << ", my clap name is: " << this->ClapTrap::_name << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:13:24 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/13 11:28:50 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hp = 100;
	this->_stam = 50;
	this->_atk = 20;
	this->_guardGate = false;
	std::cout << "ScavTrap created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	this->_hp = 100;
	this->_stam = 50;
	this->_atk = 20;
	this->_guardGate = false;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap " << this-> _name << " copied." << std::endl;
	this->_guardGate = copy._guardGate;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_stam = copy._stam;
	this->_atk = copy._atk;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp > 0 && this->_stam > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
		this->_stam--;
		
	}
	else if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " is already dead and therefore cannot attack." << std::endl;
	else if (this->_stam <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of stamina and therefore cannot attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (!_guardGate && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " is guarding the gate." << std::endl;
		_guardGate = true;
	}
	else if (_guardGate && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " is fleeing his responsabilities." << std::endl;
		_guardGate = false;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already dead and therefore cannot guard the gate." << std::endl;
}

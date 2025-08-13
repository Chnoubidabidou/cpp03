/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:00 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/13 11:16:36 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hp(10), _stam(10), _atk(0)
{
	std::cout << "ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hp(10), _stam(10), _atk(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_stam = copy._stam;
	this->_atk = copy._atk;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp > 0 && this->_stam > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
		this->_stam--;
		
	}
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead and therefore cannot attack." << std::endl;
	else if (this->_stam <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of stamina and therefore cannot attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead leave him alone dang." << std::endl;
	if (this->_hp < 0)
		this->_hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_stam && this->_hp + amount <= 10)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " points.";
		this->_hp += amount;
		this->_stam--;
		std::cout << " Now at " << this->_hp << "hp." << std::endl;
	}
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead and therefore cannot repair." << std::endl;
	else if (!this->_stam)
		std::cout << "ClapTrap " << this->_name << " is out of stamina and therefore cannot heal." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " cannot be healed by " << amount << "hp or else it would pass his max hp being 10hp because his actual health is " << this->_hp << "hp." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/19 11:50:22 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	oui("Oui");
	DiamondTrap	Oui;
	DiamondTrap	non("Non");
	DiamondTrap	Non;
	std::cout << std::endl;

	oui.whoAmI();
	Oui.whoAmI();
	non.whoAmI();
	Non.whoAmI();
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(30);
	non.beRepaired(42);
	non.guardGate();
	non.guardGate();
	non.highFiveGuys();
	std::cout << std::endl;

	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.beRepaired(42);
	oui.attack("Non");
	oui.guardGate();
	oui.highFiveGuys();
	std::cout << std::endl;
}

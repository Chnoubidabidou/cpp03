/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:02:42 by lgrisel          ###   ########.fr       */
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
	int			i(0);

	std::cout << std::endl;
	oui.whoAmI();
	Oui.whoAmI();
	non.whoAmI();
	Non.whoAmI();
	std::cout << std::endl;
	oui.attack("Non");
	non.takeDamage(20);
	non.beRepaired(42);
	non.guardGate();
	non.guardGate();
	oui.highFiveGuys();
	std::cout << std::endl;
	oui.takeDamage(100);
	non.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 50)
		non.attack("Random");
	std::cout << std::endl;
	return (0);
}

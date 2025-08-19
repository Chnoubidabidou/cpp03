/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/19 11:31:05 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	oui("Oui");
	ScavTrap	non("Non");
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(20);
	non.beRepaired(42);
	std::cout << std::endl;

	oui.guardGate();
	oui.guardGate();
	oui.guardGate();
	std::cout << std::endl;

	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.guardGate();
	oui.beRepaired(42);
	oui.attack("Non");
	std::cout << std::endl;
}

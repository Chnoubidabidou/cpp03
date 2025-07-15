/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 10:42:42 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	oui("oui");
	ScavTrap	non("non");
	int			i(0);

	std::cout << std::endl;
	oui.attack("Dinger");
	non.takeDamage(20);
	non.beRepaired(42);
	oui.guardGate();
	oui.guardGate();
	std::cout << std::endl;
	oui.takeDamage(100);
	non.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 50)
		non.attack("Foe");
	std::cout << std::endl;
	return (0);
}
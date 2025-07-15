/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 11:05:05 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	oui("Oui");
	ScavTrap	non("Non");
	int			i(0);

	std::cout << std::endl;
	oui.attack("Non");
	non.takeDamage(20);
	non.beRepaired(42);
	oui.guardGate();
	oui.guardGate();
	std::cout << std::endl;
	oui.takeDamage(100);
	non.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 50)
		non.attack("Random");
	std::cout << std::endl;
	return (0);
}

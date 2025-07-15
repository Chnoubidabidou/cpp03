/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 11:05:02 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	oui("Oui");
	ScavTrap	non("Non");
	int			i(0);

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

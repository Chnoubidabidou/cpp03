/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/08/19 11:40:31 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	oui("Oui");
	FragTrap	non("Non");
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(30);
	non.beRepaired(42);
	std::cout << std::endl;

	oui.highFiveGuys();
	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.highFiveGuys();
	oui.beRepaired(42);
	oui.attack("Non");
	std::cout << std::endl;
}

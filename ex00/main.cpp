/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 11:05:07 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	oui("Oui");
	ClapTrap	non("Non");
	ClapTrap	claptrap;
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(0);
	non.beRepaired(42);
	std::cout << std::endl;

	non.takeDamage(2);
	non.beRepaired(3);
	non.beRepaired(2);
	std::cout << std::endl;
	return (0);
}

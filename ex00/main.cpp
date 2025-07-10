/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/10 16:02:04 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Oui");
	ClapTrap	b("Non");
	ClapTrap	claptrap;
	std::cout << std::endl;

	a.attack("Non");
	b.takeDamage(0);
	b.beRepaired(42);
	std::cout << std::endl;

	b.takeDamage(2);
	b.beRepaired(3);
	b.beRepaired(2);
	std::cout << std::endl;
	return (0);
}
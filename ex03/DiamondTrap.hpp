/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:13:17 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 12:47:38 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &copy);

		using	ScavTrap::attack;
		void	whoAmI(void);
};
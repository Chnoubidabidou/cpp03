/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:47:33 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 12:49:28 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &copy);

		void	highFiveGuys(void);
};
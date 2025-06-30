/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:56:02 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/30 20:22:40 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap(void);
		void	attack(const std::string& target);
		void	whoAmI(void) const;
		std::string	getName();
		void	setName(const std::string& name);
};
#endif

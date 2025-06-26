/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:28:35 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/25 19:28:46 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main() {
	ClapTrap claptrap("CLTP");

	claptrap.attack("target1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	claptrap.attack("target2");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	return 0;
}

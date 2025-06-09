/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:42:28 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/09 16:42:29 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void	Zombie::announce() {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name){
	this->name = name;
	cout << "Zombie " << name << " created." << endl;
}

Zombie::~Zombie(void) {
	cout << "Zombie " << this->name << " destroyed." << endl;
}

void	Zombie::setName(string name) {
	this->name = name;
}

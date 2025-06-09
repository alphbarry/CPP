/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:42:56 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/09 16:42:57 by alphbarr         ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:42:24 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/09 16:42:25 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, string name);

int	main(){
	int	size = 10;

	Zombie*	horde = zombieHorde(size, "Zombie");
	for (int i = 0; i < size; i++){
		horde[i].announce();
	}
	delete[] horde;
}

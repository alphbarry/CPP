/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:43:01 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/09 16:43:02 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
using namespace std;

class	Zombie{
	private:
		string	name;
	public:
		void	announce(void);
		Zombie(string name);
		~Zombie(void);
};

Zombie	*newZombie(string name);
void	randomChump(string name);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:28:35 by alphbarr          #+#    #+#             */
/*   Updated: 2025/06/30 19:37:19 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main() {
    // 🧍 Crear instancias de cada tipo de Trap
    ClapTrap clapTrap("Clappy");
    ScavTrap scavTrap("Scavvy");
    FragTrap fragTrap("Fraggy");

    std::cout << "\n--- 🎯 Ataques ---\n" << std::endl;
    clapTrap.attack("Kalilu");
    scavTrap.attack("Sambu");
    fragTrap.attack("Momo");

    std::cout << "\n--- 💥 Daño recibido ---\n" << std::endl;
    clapTrap.takeDamage(20);
    scavTrap.takeDamage(30);
    fragTrap.takeDamage(50);

    std::cout << "\n--- 🔧 Reparaciones ---\n" << std::endl;
    clapTrap.beRepaired(10);
    scavTrap.beRepaired(20);
    fragTrap.beRepaired(30);

    std::cout << "\n--- 🧱 Habilidades especiales ---\n" << std::endl;
    scavTrap.guardGate();          // Modo guardia (ScavTrap)
    fragTrap.highFivesGuys();      // Petición de high five (FragTrap)

    std::cout << "\n--- ✅ Fin del programa ---" << std::endl;
    return 0;
}

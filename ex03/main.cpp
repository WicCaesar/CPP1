/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:32 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/12 06:23:34 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// These brackets are used to create a new scope. This is useful to avoid
// naming conflicts, and to ensure that the destructors of the objects are
// called when the scope is exited.
int	main(void) {
	{
		Weapon	weapon = Weapon("Liandry's Torment");
		HumanA	humanA("Rumble", weapon);
		humanA.attack();
		weapon.setType("Stormsurge");
		humanA.attack();
	}
	{
		Weapon	weapon = Weapon("Deathfire Grasp");
		HumanB	humanB("Veigar");
		humanB.set_weapon(weapon);
		humanB.attack();
		weapon.setType("Rabadon's Deathcap");
		humanB.attack();
	}
	return (0);
}

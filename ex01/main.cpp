/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:39:41 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 20:24:16 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates objects (a horde of zombies) as a single allocation, in the heap. 
// Announces each zombie in the horde, then kills them.
int	main(void) {
	int	hordeSize = (8);

	Zombie	*horde = zombieHorde(hordeSize, "Caesar ");
	for (int i = 0; i < hordeSize; i++) {
		horde[i].announce();
	}
	delete[] horde;
}
// The delete[] syntax deallocates memory that was allocated with new[].

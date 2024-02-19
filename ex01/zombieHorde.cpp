/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:41:01 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 08:07:20 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].set_zombie(name + static_cast<char>('0' + i));
	}
	return (horde);
}

/*
Zombie	*zombieHorde(int N) {
	Zombie	*horde = new Zombie[N];
	std::string	names[] = {
		"José", "George", "Phani", "Béla", "Wan", "Wes", "Cronenberg", "Howard",
		"Doug", "Guillermo", "Linda", "Lindqvist", "Patrick", "Ridley", "Manoj",
		"Otto", "Alfred", "Herzog", "Vincent", "Collette", "Richard", "Michael",
		"Fido", "Gabriel", "Caesar", "Fernando", "Phillip", "Eggers", "Cláudia",
		"Mina", "Viktor", "André", "Vange", "Yorick", "Rodrigo", "Érico", "Mia",
		"Brás", "Ti", "Boris", "Charlie", "Ari", "Willem", "Jordan", "Bub", "Ed"
	};
	for (int i = 0; i < N; i++) {
		horde[i].set_zombie(names[rand() % 46]);
	}
	return (horde);
}
*/
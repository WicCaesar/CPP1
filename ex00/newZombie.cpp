/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:37:41 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 01:41:39 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates a zombie, names it, and returns a pointer to it, so it can be used 
// outside of the function scope (in main, for instance).
Zombie	*newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
// The 'new' keyword is used to allocate memory for a new object at runtime.
// The object is created in the heap, so it persists after the function ends.

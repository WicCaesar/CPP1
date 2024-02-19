/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:37:55 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/11 08:07:43 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	private:
		std::string	name_;

	public:
		// Zombie(void);
		~Zombie(void);

		void	set_zombie(std::string name);

		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif

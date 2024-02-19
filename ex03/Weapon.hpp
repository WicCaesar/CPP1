/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:57:37 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/12 05:52:56 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
	private:
		std::string	type_;

	public:
		Weapon(const std::string &type);

		std::string	getType(void) const;
		void		setType(const std::string &type);		
};

#endif

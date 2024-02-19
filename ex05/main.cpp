/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:49:42 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/14 05:32:20 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	dalek;

	dalek.complain("INFO");
	dalek.complain("WARNING");
	dalek.complain("ERROR");
	dalek.complain("DEBUG");
	return (0);
}
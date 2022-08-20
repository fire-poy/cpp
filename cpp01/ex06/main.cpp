/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:46:13 by mpons             #+#    #+#             */
/*   Updated: 2022/08/19 15:08:03 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl h;

	if (ac != 2)
	{
		std::cout << "usage ./Harl_filter min_complain" << std::endl;
		std::cout << "min_complain = debug | info | warning | error" << std::endl;
	    return (0);
	}
	h.complain(av[1]);
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:57:18 by mpons             #+#    #+#             */
/*   Updated: 2022/08/16 11:41:26 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*first = new Zombie[N];
	Zombie	*zombie_ptr = first;
	
	i = -1;
	while (++i < N)
	{
		zombie_ptr->set_name(name);
		zombie_ptr->announce();
		zombie_ptr++;
	}
	return (first);
}

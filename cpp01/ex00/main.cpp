/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:02:35 by mpons             #+#    #+#             */
/*   Updated: 2022/07/19 17:31:53 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie stackZombie("pepe");
	Zombie *heapZombie = new Zombie("juan carlos");

	randomChump("Roberto");
	stackZombie.announce();
	heapZombie->announce();
	delete(heapZombie);
}

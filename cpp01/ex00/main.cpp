/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:02:35 by mpons             #+#    #+#             */
/*   Updated: 2022/08/15 16:58:03 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie stackZombie("pepe");
	Zombie *heapZombie = newZombie("juan carlos");

	randomChump("Roberto");
	stackZombie.announce();
	heapZombie->announce();
	delete(heapZombie);
}

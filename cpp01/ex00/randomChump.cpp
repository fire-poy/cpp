/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:57:18 by mpons             #+#    #+#             */
/*   Updated: 2022/08/15 16:56:32 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, 
// and the zombie announces itself.
void randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}

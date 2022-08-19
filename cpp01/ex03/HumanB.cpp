/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:22:07 by mpons             #+#    #+#             */
/*   Updated: 2022/08/18 15:32:02 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) , _w(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon w)
{
	this->_w = &w;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_w->getType() << std::endl;
}

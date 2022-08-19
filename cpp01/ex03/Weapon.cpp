/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:27:52 by mpons             #+#    #+#             */
/*   Updated: 2022/08/18 10:34:01 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type), _typeRef(this->_type)
{
    return;
}

std::string	&Weapon::getType(void) const
{
	return (this->_typeRef);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
	return ;
}

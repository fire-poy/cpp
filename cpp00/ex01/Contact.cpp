/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:06:08 by mpons             #+#    #+#             */
/*   Updated: 2022/06/15 13:16:37 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
	
Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::setFirstName(std::string s)
{
	this->_FirstName = s;
	return (0);
}

int	Contact::setLastName(std::string s)
{
	this->_LastName = s;
	return (0);
}

int	Contact::setNickName(std::string s)
{
	this->_NickName = s;
	return (0);
}

int	Contact::setPhoneNumber(std::string s)
{
	this->_PhoneNumber = s;
	return (0);
}

int	Contact::setDarkestSecret(std::string s)
{
	this->_DarkestSecret = s;
	return (0);
}

//this get la valeur de ce contact la et non un contact generique
std::string	Contact::getFirstName(void) const
{
	return (this->_FirstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_LastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_NickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_PhoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_DarkestSecret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:06:08 by mpons             #+#    #+#             */
/*   Updated: 2022/06/06 13:20:41 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// std::cout << "Input a word: ";
// 	std::cin >> buff;
#include "Contact.hpp"
	
Contact::Contact(void)
{
	std::cout << "contact created" << std::endl;
	this->i = 4;
}

Contact::~Contact(void)
{
	std::cout << "destructor called" << std::endl;
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

	// std::cout << "last name" << std::endl;
	// std::getline(std::cin, cmd);
	// std::cout << "nickname" << std::endl;
	// std::getline(std::cin, cmd);
	// std::cout << "phone number" << std::endl;
	// std::getline(std::cin, cmd);
	// std::cout << "darkest secret" << std::endl;

	// std::string tmp;
// ----------------
	// std::cout << "first name" << std::endl;
	// std::getline(std::cin, tmp);
	// while (s->empty())
	// {
	// 	std::cout << "Contact can’t have empty fields." << std::endl;
	// 	std::cout << "first name" << std::endl;
	// 	std::getline(std::cin, s);
	// }¡

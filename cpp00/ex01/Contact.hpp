/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:06:12 by mpons             #+#    #+#             */
/*   Updated: 2022/06/06 13:42:44 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

public:

	int	i;

	Contact(void);
	~Contact(void);
	int	setFirstName(std::string s);
	int	setLastName(std::string s);
	int	setNickName(std::string s);
	int	setPhoneNumber(std::string s);
	int	setDarkestSecret(std::string s);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

private:

	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _PhoneNumber;
	std::string _DarkestSecret;
	std::string _empty;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:57:32 by mpons             #+#    #+#             */
/*   Updated: 2022/08/19 15:13:16 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::_debug(void) const
{
	std::cout << "Debug: I love having extra bacon for my 3xFspecial-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void) const
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money." <<
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}	

void	Harl::_warning(void) const
{
	std::cout << "Warning:  think I deserve to have some extra bacon for free." << 
	" I’ve been coming for years whereas you started working here since last month."  << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	index[4]	= {"debug", "info", "warning", "error"};
	f_ptr		fun[]		= {&Harl::_debug , &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i 			= -1;

	while (++i < 4)
	{
		if (index[i] == level)
		{
			while (i < 4)
			{
				(this->*fun[i])();
				std::cout << std::endl;
				i++;
			}
			return ;
		}
	}
	std::cout << "-- Invalid complain --" << std::endl;
}

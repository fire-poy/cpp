/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:53:54 by mpons             #+#    #+#             */
/*   Updated: 2022/06/02 16:08:46 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i = 1;
	int j = 0;

	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j]) 
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}


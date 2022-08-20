/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileSt.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:15:58 by mpons             #+#    #+#             */
/*   Updated: 2022/08/20 17:28:14 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEST_HPP
# define FILEST_HPP

# include <iostream>
# include <fstream>

struct FileSt
{
	std::string     inFname;
	std::string     outFname;
	std::ifstream   inF;
	std::ofstream   outF;
	std::string     s1;
	std::string     s2;
	std::size_t     l1;
	std::size_t     l2;
	std::string 	buf;
	std::string		tmp1;
	std::string 	tmp2;
	std::size_t 	i;
};

#endif

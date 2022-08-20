/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileSt.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:15:58 by mpons             #+#    #+#             */
/*   Updated: 2022/08/20 13:53:04 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEST_HPP
# define FILEST_HPP

#include <iostream>
#include <fstream>

struct FileSt
{
	FileSt(void);
	~FileSt();
	
	// file names and streams
		std::string     inFname;
		std::string     outFname;
		std::ifstream   inF;
		std::ofstream   outF;

		// strings to replace
		std::string     s1;
		std::string     s2;
		std::size_t     l1;
		std::size_t     l2;

		// buffer manipulations
		std::string buf;
		std::string tmp1;
		std::string tmp2;
		std::size_t i;
};

#endif

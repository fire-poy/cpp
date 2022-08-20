/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:53:04 by mpons             #+#    #+#             */
/*   Updated: 2022/08/20 14:09:25 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "FileSt.hpp"

int	init_f(int ac, char **av, FileSt *f)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./Sed_is_for_losers filename string_to_replace string_to_add" << std::endl;
		return (1);	
	}
	f->inFname = av[1];
	f->inF.open(av[1]);
	// f->inF.open(f->inFname);
    if (f->inF.fail() == true)
    {
        std::cout << "error: open file " << f->inFname << std::endl;
        return (1);
    }
	f->outFname = av[1];
	f->outFname += ".replace";
	// std::cout << f->outFname << std::endl;
	f->outF.open(f->outFname);
    if (f->outF.fail() == true)
    {
        std::cout << "error: creating file " << f->outFname << std::endl;
        return (1);
    }
	f->s1 = av[2];
	f->s2 = av[3];
	f->l1 = f->s1.length();
    f->l2 = f->s2.length();
    return (0);
}

int	main(int ac, char **av)
{
	FileSt	f;
	size_t	i;
	
	if (init_f(ac, av, &f))
		return (1);
	while (getline(f.inF, f.buf))
    {
        i = f.buf.find(f.s1);
		std::cout << "1st " << i << std::endl;
        while (i != f.buf.npos)
        {
            f.tmp1 = f.buf.substr(0, i); //copia linea hasta i
            f.tmp2 = f.buf.substr(i + f.l1); // copia linea desde de i + l1
            f.buf = f.tmp1 + f.s2 + f.tmp2; //remplaza buf por tmp1 + s2 + tmp2
            i = f.buf.find(f.s1); // busca siguiente
			std::cout << "m " << i << std::endl;
			std::cout << "NPOS" << f.buf.npos << std::endl;
        }
        f.outF << f.buf;
        if (f.inF.eof() == false)
            f.outF << std::endl;
        f.buf.clear();
    }
	f.inF.close();
	f.outF.close();
	return (0);
}

// streambuffer
// fichier + test

// Forbidden functions : std::string::replace
// Using C file manipulation functions is forbidden and will be considered cheating.

//  All the member functions of the class std::string are allowed sauf replace
// handle unexpected inputs and errors
//  You have to create and turn in your own tests to ensure your program works as expected.

// open the file -> filename <- and copies its content into a new file -> filename.replace <-
// replacing every occurrence of s1 with s2.
	
	// open f1;
	// search s1;
	// copies from 0 to pos -1,
	// append s2,	
	// open f1;
// rdbuf
//     Get stream buffer (public member function)
// read
//     Read block of data (public member function)
// getline
//     Get line (public member function)
// rdbuf
// rdbuf
//     Get/set stream buffer (public member function)
	// ofs	 << "i like ponies a whole damm lot" << std::endl

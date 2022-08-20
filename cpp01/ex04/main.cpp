/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:53:04 by mpons             #+#    #+#             */
/*   Updated: 2022/08/20 17:28:09 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileSt.hpp"

int	init_f(int ac, char **av, FileSt *f)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./Sed_is_for_losers filename string_to_replace string_to_add" << std::endl;
		return (1);	
	}
	f->inFname = av[1];
	f->inF.open(f->inFname.c_str());
    if (f->inF.fail() == true)
    {
        std::cout << "error: can't open file " << f->inFname << std::endl;
        return (1);
    }
	f->outFname = av[1];
	f->outFname += ".replace";
	f->outF.open(f->outFname.c_str());
    if (f->outF.fail() == true)
    {
        std::cout << "error: creating file " << f->outFname << std::endl;
        return (1);
    }
	f->s1 = av[2];
	if (f->s1.empty())
	{
        std::cout << "s1 can't be empty" << std::endl;
        return (1);
    }
	f->s2 = av[3];
	f->l1 = f->s1.length();
    f->l2 = f->s2.length();
    return (0);
}

// open the file -> filename <- and copies its content into a new file -> filename.replace <-
// replacing every occurrence of s1 with s2.
int	main(int ac, char **av)
{
	FileSt	f;
	size_t	i;
	
	if (init_f(ac, av, &f))
		return (1);
	while (getline(f.inF, f.buf))
    {
        i = f.buf.find(f.s1);
        while (i != f.buf.npos)
        {
            f.tmp1 = f.buf.substr(0, i);
            f.tmp2 = f.buf.substr(i + f.l1);
            f.buf = f.tmp1 + f.s2 + f.tmp2;
            i = f.buf.find(f.s1);
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

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:

	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);
	~Fixed(void);

	float	toFloat(void) const;
	int		toInt(void) const;

	void	setRawBits (int const raw);
	int		getRawBits(void) const;

	void	setVerbose(bool value);
	bool	getVerbose(void) const;
	
	int		pow(int nb, int power) const;

private:

	int					_rawBits;
	const static int	_fractionalBits;
	static bool			_verbose;

};

std::ostream	& operator<<(std::ostream & o, Fixed const & inst);

#endif

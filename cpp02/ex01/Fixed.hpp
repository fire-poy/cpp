#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


//allowd roundf (from <cmath>)
class Fixed
{
public:

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	~Fixed(void);

	float	toFloat(void) const;
	int		toInt(void) const;

	void	setRawBits (int const raw);
	int		getRawBits(void) const;

private:

	int					_rawBits;
	const static int	_fractionalBits; //doit etre toujour 8

};

std::ostream	& operator<<(std::ostream & o, Fixed const & inst);

#endif

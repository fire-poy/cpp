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
	Fixed	&operator=(Fixed const & rhs);
	~Fixed(void);

	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	
	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits (int const raw);
	int		getRawBits(void) const;
	void	setVerbose(bool value);
	bool	getVerbose(void) const;
	int		pow(int nb, int power) const;

	static Fixed	min(Fixed &f1, Fixed &f2);
	static Fixed	min(Fixed const &f1, Fixed const &f2);
	static Fixed	max(Fixed &f1, Fixed &f2);
	static Fixed	max(Fixed const &f1, Fixed const &f2);

private:

	int					_rawBits;
	const static int	_fractionalBits;
	static bool			_verbose;

};

std::ostream	& operator<<(std::ostream & o, Fixed const & inst);

#endif

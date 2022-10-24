#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
	
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & src);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_rawBits;
		const static int	_fractionalBits;
};

std::ostream	& operator<<(std::ostream & o, Fixed const & inst);

#endif

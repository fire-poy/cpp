#ifndef CLASSNAME_HPP
# define CLASSNAME_HPP

# include <iostream>

class ClassName
{
	public:
	
		ClassName(void);
		// ClassName(int const n);
		// ClassName(std::string const & name);
		ClassName(ClassName const & src);
		~ClassName(void);
		ClassName & operator=(ClassName const & rhs);

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const f) const;
		void	bar(ClassName const & i) const;
		
		void		setName(std::string const & name);
		std::string	getName(void) const ;
		int			getFoo(void) const;

	private:

		int			_foo;
		std::string	_name;
};

std::ostream	& operator<<(std::ostream & o, ClassName const & inst);

#endif

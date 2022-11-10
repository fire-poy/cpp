#ifndef CLASSNAME_HPP
# define CLASSNAME_HPP

# include <iostream>

class ClassName
{
	public:
	
		ClassName();
		// ClassName(int const n);
		// ClassName(std::string const & name = "no_name");
		ClassName(ClassName const & src);
		ClassName & operator=(ClassName const & rhs);
		~ClassName();

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const f) const;
		void	bar(ClassName const & i) const;
		
		void		setName(std::string const & name);
		std::string	getName() const ;
		int			getFoo() const;

	private:

		int			_foo;
		std::string	_name;
};

std::ostream	& operator<<(std::ostream & o, ClassName const & inst);

#endif

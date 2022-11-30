#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
	
		ShrubberyCreationForm(std::string const & target = "standard");
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();

	protected:
		virtual void	executionWork() const;

	private:

		static const int	_gradeToSign = 145;
		static const int	_gradeToExe = 137;
		std::string			_target;

};

#endif

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	
		PresidentialPardonForm(std::string const & target = "standard");
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();

	protected:
		virtual void	executionWork() const;

	private:

		static const int	_gradeToSign = 25;
		static const int	_gradeToExe = 5;
		std::string			_target;

};

#endif

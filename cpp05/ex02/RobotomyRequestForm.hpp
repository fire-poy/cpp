#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
	
		RobotomyRequestForm(std::string const & target = "standard");
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();

	protected:
		virtual void	executionWork() const;

	private:

		static const int	_gradeToSign = 72;
		static const int	_gradeToExe = 45;
		std::string			_target;

};

#endif

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	public:
	
		AForm(std::string const & name = "Standar Form", int const gradeToSign = 150, int const gradeToExe = 150);
		AForm(AForm const & src);
		AForm & operator=(AForm const & rhs);
		virtual ~AForm();

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;
		bool		isSigned() const;
		void		beSigned(const Bureaucrat &B);
		void		execute(Bureaucrat const & executor) const;

	protected:
		virtual void	executionWork() const = 0;

	private:

		std::string	const	_name;
		const	int			_gradeToSign;
		const	int			_gradeToExe;
		bool				_signed;
		
		void		checkGrades() const;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade to high";
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "Grade too low";
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "Form is not signed and can not be executed";
				}
		};
};

std::ostream	& operator<<(std::ostream & o, AForm const & inst);

#endif

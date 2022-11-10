#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
	
		Form(std::string const & name = "Standar form", int const gradeToSign = 150, int const gradeToExe = 150);
		Form(Form const & src);
		Form & operator=(Form const & rhs);
		~Form();

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;
		bool		isSigned() const;
		void		beSigned(const Bureaucrat &B);
		void		checkGrades() const;

	private:

		std::string	const	_name;
		const	int			_gradeToSign;
		const	int			_gradeToExe;
		bool				_signed;

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
				virtual const char* what() const throw()
				{
					// return "Form can't have grade lower than 150";
					return "Grade too low";

				}

		};
};

std::ostream	& operator<<(std::ostream & o, Form const & inst);

#endif

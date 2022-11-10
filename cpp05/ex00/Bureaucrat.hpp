#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
	
		Bureaucrat(std::string const & name = "no_name", int grade = 150);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		checkGrade() const;
		void		gradeUp();
		void		gradeDown();

	private:

		std::string	const	_name;
		int					_grade;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat can't have grade upper than 1";
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat can't have grade lower than 150";
				}
		};
};

std::ostream	& operator<<(std::ostream & o, Bureaucrat const & inst);

#endif

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
AForm("ShrubberyCreationForm", ShrubberyCreationForm::_gradeToSign, ShrubberyCreationForm::_gradeToExe), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

// operators
ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs._target;//getTarget();
	return *this;
}

void	ShrubberyCreationForm::executionWork() const
{
	std::ofstream	ShFile;
	std::string		fileName = this->_target + "_shrubbery";

	ShFile.open(fileName.c_str());
    if (ShFile.fail() == true)
    {
        std::cout << "error: creating file " << fileName << std::endl;
        return ;
    }
	ShFile << "              .o00o" << std::endl;
    ShFile << "             o000000oo" << std::endl;
    ShFile << "            00000000000o" << std::endl;
    ShFile << "           00000000000000" << std::endl;
    ShFile << "        oooooo  00000000  o88o" << std::endl; 
    ShFile << "     ooOOOOOOOoo  ```''  888888" << std::endl; 
    ShFile << "   OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl;
    ShFile << "  oOOOOOOOOOO'.QQQQQQQQQQ/.88' " << std::endl;
    ShFile << "  OOOOOOOOOO'.QQQQQQQQQQ/ /q"<< std::endl;
    ShFile << "   OOOOOOOOO QQQQQQQQQQ/ /QQ"<< std::endl;
    ShFile << "     OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl;
    ShFile << "       OO:F_P:O `QQQ/  /Q'" << std::endl;
    ShFile << "          ||. ( |  // |" << std::endl;
    ShFile << "          d( (((|_////" << std::endl;
    ShFile << "          qP| (( _' `|Ob" << std::endl;
    ShFile << "             (  / (  (Op" << std::endl;
    ShFile << "             |  | O| |" << std::endl;
    ShFile << "     _       /(. (_/ /( " << std::endl;
    ShFile << "      `---__/|_((   //|  __" << std::endl;
    ShFile << "            `-'  `-'`-'-'" << std::endl;
  	ShFile.close();
}
/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->target = "Default target";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &original)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = original;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &original)
{
	if (this != &original)
	{
		this->target = original.target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::ofstream file(this->getName() + "_shrubbery");
			if (file.is_open())
			{
				file << "       _-_" << std::endl;
				file << "    /~~   ~~\\" << std::endl;
				file << " /~~         ~~\\" << std::endl;
				file << "{               }" << std::endl;
				file << " \\  _-     -_  /" << std::endl;
				file << "   ~  \\\\ //  ~" << std::endl;
				file << "_- -   | | _- _" << std::endl;
				file << "  _ -  | |   -_" << std::endl;
				file << "      //  \\ " << std::endl;
				file.close();
			}
			else
				std::cout << "Error opening file" << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		std::cout << "Form is not signed" << std::endl;
}

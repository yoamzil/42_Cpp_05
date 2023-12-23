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

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
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
		// this->gradeToSign = original.gradeToSign;
	}
	return (*this);
}

// std::ostream    &operator<<(std::ostream &out, ShrubberyCreationForm &ShrubberyCreationForm)
// {
// 	out << ShrubberyCreationForm.getName() << ", is signed: " << ShrubberyCreationForm.getIsSigned() <<", grade to sign ShrubberyCreationForm " << ShrubberyCreationForm.getGradeToSign() << ", and grade to execute ShrubberyCreationForm " << ShrubberyCreationForm.getGradeToExecute() << std::endl;
// 	return (out);
// }


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

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &original) : name(original.name) , gradeToSign(original.gradeToSign) , gradeToExecute(original.gradeToExecute)
{
    // std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = original;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &original)
{
    if (this != &original)
    {
        // this->gradeToSign = original.gradeToSign;
    }
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string Name, const int Grade) : name(Name) , gradeToSign(Grade) , gradeToExecute(Grade)
{
    // std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
}

std::ostream    &operator<<(std::ostream &out, const PresidentialPardonForm &PresidentialPardonForm)
{
    out << PresidentialPardonForm.getName() << ", is signed: " << PresidentialPardonForm.getIsSigned() <<", grade to sign PresidentialPardonForm " << PresidentialPardonForm.getGradeToSign() << ", and grade to execute PresidentialPardonForm " << PresidentialPardonForm.getGradeToExecute() << std::endl;
    return (out);
}

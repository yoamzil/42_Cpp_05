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

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Unknown") , gradeToSign(150) , gradeToExecute(150)
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const &original) : name(original.name) , gradeToSign(original.gradeToSign) , gradeToExecute(original.gradeToExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = original;
}

AForm  &AForm::operator=(AForm const &original)
{
    if (this != &original)
    {
        // this->gradeToSign = original.gradeToSign;
    }
    return (*this);
}

AForm::AForm(const std::string Name, bool IsSigned, const int GradeToSign, const int GradeToExecute ) : name(Name) , gradeToSign(GradeToSign) , gradeToExecute(GradeToExecute)
{
    std::cout << "AForm parameterized constructor called" << std::endl;
    if (GradeToSign < 1)
        throw GradeTooHighException();
    else if (GradeToSign > 150)
        throw GradeTooLowException();
}



std::ostream    &operator<<(std::ostream &out, const AForm &AForm)
{
    out << AForm.getName() << ", is signed: " << AForm.getIsSigned() <<", grade to sign AForm " << AForm.getGradeToSign() << ", and grade to execute AForm " << AForm.getGradeToExecute() << std::endl;
    return (out);
}

std::string AForm::getName() const
{
    return (name);
}

int AForm::getGradeToSign() const
{
    return (gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (gradeToExecute);
}
 
bool AForm::getIsSigned() const
{
	return (isSigned);
}

void		AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	else
		this->isSigned = true;
}

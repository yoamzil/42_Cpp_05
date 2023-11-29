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

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Unknown") , gradeToSign(150) , gradeToExecute(150)
{
    // std::cout << "Form constructor called" << std::endl;
}

Form::~Form()
{
    // std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form const &original) : name(original.name) , gradeToSign(original.gradeToSign) , gradeToExecute(original.gradeToExecute)
{
    // std::cout << "Form copy constructor called" << std::endl;
    *this = original;
}

Form  &Form::operator=(Form const &original)
{
    if (this != &original)
    {
        // this->gradeToSign = original.gradeToSign;
    }
    return (*this);
}

Form::Form(const std::string Name, const int Grade) : name(Name) , gradeToSign(Grade) , gradeToExecute(Grade)
{
    // std::cout << "Form parameterized constructor called" << std::endl;
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
}



std::ostream    &operator<<(std::ostream &out, const Form &Form)
{
    out << Form.getName() << ", is signed: " << Form.getIsSigned() <<", grade to sign Form " << Form.getGradeToSign() << ", and grade to execute Form " << Form.getGradeToExecute() << std::endl;
    return (out);
}

std::string Form::getName() const
{
    return (name);
}

int Form::getGradeToSign() const
{
    return (gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (gradeToExecute);
}
 
bool Form::getIsSigned() const
{
	return (isSigned);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	else
		this->isSigned = true;
}

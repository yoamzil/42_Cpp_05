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

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm()
{
    std::cout << "RobotmyRequestForm constructor called" << std::endl;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
    std::cout << "RobotmyRequestForm destructor called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &original)
{
	std::cout << "RobotmyRequestForm copy constructor called" << std::endl;
	*this = original;
}

RobotmyRequestForm  &RobotmyRequestForm::operator=(RobotmyRequestForm const &original)
{
	if (this != &original)
	{
		// this->gradeToSign = original.gradeToSign;
	}
	return (*this);
}
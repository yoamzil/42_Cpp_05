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

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include <cstdlib>

class   RobotomyRequestForm : public AForm
{
    private:
		std::string target;
    public:
		// ==================== Constructors ====================
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &original);
        RobotomyRequestForm  &operator=(RobotomyRequestForm const &original);

        RobotomyRequestForm(const std::string Target);
		
		// ==================== Getters ====================
		std::string	getTarget() const;

		// ==================== Methods ====================
		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream    &operator<<(std::ostream &out, RobotomyRequestForm &RobotomyRequestForm);

#endif
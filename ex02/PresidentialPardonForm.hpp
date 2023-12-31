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

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    private:
		std::string target;
    public:
		// ==================== Constructors ====================
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &original);
        PresidentialPardonForm  &operator=(PresidentialPardonForm const &original);

        PresidentialPardonForm(const std::string Target);
		
		// ==================== Getters ====================
		std::string	getTarget() const;

		// ==================== Methods ====================
		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream    &operator<<(std::ostream &out, PresidentialPardonForm &PresidentialPardonForm);

#endif
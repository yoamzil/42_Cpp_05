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

class AForm;
class   PresidetialPardonForm
{
    private:

    public:
        PresidetialPardonForm();
        ~PresidetialPardonForm();
        PresidetialPardonForm(PresidetialPardonForm const &original);
        PresidetialPardonForm  &operator=(PresidetialPardonForm const &original);

        PresidetialPardonForm(const std::string Name, int grade);

};

std::ostream    &operator<<(std::ostream &out, PresidetialPardonForm &PresidetialPardonForm);

#endif
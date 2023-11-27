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

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Ali", 15);
        Bureaucrat b("Hmad", 130);
        
        
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Try Again!"<< std::endl;
    }
    return (0);
}

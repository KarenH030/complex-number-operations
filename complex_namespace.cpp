#include <iostream>

namespace cmpx_op
{
	struct Complex{
	
	double real ;
	double unreal ;

	} num1 , num2 ;


	Complex add(Complex num1, Complex num2)
	{
		num1.real += num2.real ;
		num1.unreal += num2.unreal ;

		return num1 ;
	}


	Complex sub(Complex num1, Complex num2)
        {
                num1.real -= num2.real ;
                num1.unreal -= num2.unreal ;

                return num1 ;
        }


	Complex mul(Complex num1, Complex num2)
        {
                num1.real *= num2.real ;
                num1.unreal *= num2.unreal ;

                return num1 ;
        }


	Complex add(Complex num1, Complex num2)
        {
                num1.real /= num2.real ;
                num1.unreal /= num2.unreal ;

                return num1 ;
        }


}




int main()
{
	
	


}

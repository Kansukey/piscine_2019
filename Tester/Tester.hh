//
// Tests.hh for  in /home/agor_m/pool/tests
// 
// Made by Maxime Agor
// Login	 <agor_m@epitech.net>
// 
// Started on	Thu Jan	14 15:48:06 2016 Maxime Agor
// Last update	Thu Jan	14 15:48:06 2016 Maxime Agor
//

#include <string>
#include <iostream>

class	Tester
{
public:
	/* ctor */
	Tester();

	/* dtor */
	~Tester();

	/* methods */
	template<typename T>
	bool test(const T &value, const T &expected)
	{
		++this->tests;
		if (value == expected)
		{
			++this->succeed;
			std::cout << "\033[0;32m" <<
				"[SUCCESS] " <<
				"value : " << value << ", "
				"expected : " << expected <<
				"\033[0;37m" << std::endl;
			return true;
		}
		else
		{
			std::cout << "\033[0;31m" <<
				"[FAIL] " <<
				"value : " << value << ", "
				"expected : " << expected <<
				"\033[0;37m" << std::endl;
			return false;
		}
	}


	/* getters */
	size_t 	getTests() const;
	size_t 	getSucceed() const;

	/* setters */

private:
	size_t	tests;
	size_t	succeed;

protected:

};

std::ostream& operator<< (std::ostream &stream, Tester const &tester);
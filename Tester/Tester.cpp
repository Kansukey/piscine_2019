//
// Tester.cpp for  in /home/agor_m/pool/tests
// 
// Made by Maxime Agor
// Login	 <agor_m@epitech.net>
// 
// Started on	Thu Jan	14 15:49:12 2016 Maxime Agor
// Last update	Thu Jan	14 15:49:12 2016 Maxime Agor
//

#include "Tester.hh"

Tester::Tester()
{
	this->tests = 0;
	this->succeed = 0;
}

Tester::~Tester()
{
	std::cout <<
	((this->tests == this->succeed) ? std::string("\033[0;32m") : std::string("\033[0;31m")) <<
	"===== TESTER: " <<
		(this->tests == this->succeed ? std::string("SUCCESSED") : std::string("FAILED")) <<
		" (" << this->succeed << " / " << this->tests << " passed) =====" <<
		"\033[0;37m" << std::endl;
}

size_t 	Tester::getTests() const
{
	return this->tests;
}
size_t 	Tester::getSucceed() const
{
	return this->succeed;
}

std::ostream& operator<< (std::ostream &stream, Tester const &tester) {
	return stream <<
	(tester.getTests() == tester.getSucceed() ? std::string("\033[0;32m") : std::string("\033[0;31m")) <<
	"===== TESTER: " <<
		(tester.getTests() == tester.getSucceed() ? std::string("SUCCESSED") : std::string("FAILED")) <<
		" (" << tester.getSucceed() << " / " << tester.getTests() << " passed) =====" <<
		"\033[0;37m";
}

#include "Client.h"
#include "LibBar.h"

int foo() {
	return bar() + 37;
}

std::vector<std::string> fooVector() {
	std::vector<std::string> v = barVector();
	v.push_back("3");
	v.push_back("7");
	return v;
}

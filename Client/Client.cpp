#include "Client.h"
#include "LibBar.h"

int anInt() {
	return fromLibAnInt() + 37;
}

std::vector<int> anIntVector() {
	std::vector<int> v = fromLibIntVector();
	v.push_back(3);
	v.push_back(7);
	return v;
}


std::vector<std::string> aStringVector() {
	std::vector<std::string> v = fromLibStringVector();
	v.push_back("3");
	v.push_back("7");
	return v;
}

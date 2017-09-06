#pragma once
#include <stdexcept>
using namespace std;
class Error :public logic_error {
public:
	Error(const string &message) :logic_error(message), message(message) {}
	~Error() {}
	const string &getMessage()const {
		return message;
	}
private:
	string message;
};
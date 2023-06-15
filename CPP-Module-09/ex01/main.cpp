
#include "./RPN.hpp"



int main(int ac, char** av) {
	RPN rpn;

	if (ac != 2) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	rpn.parseArg(av[1]);

	/**
	 * @todo
	 * 			find a way to parse the string
	 *
	 * @brief	loop through the given string and check if the current char is number
	 * 			if so push it to the stack, but before that check if the stack size is
	 * 			less then 2.
	 */
}

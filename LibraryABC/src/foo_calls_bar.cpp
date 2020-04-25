#include <iostream>
#include "foo_calls_bar.h"
#include "internal_bar.h"

void foo() {
	std::cout << "foo will call bar:\n";
	bar();
}
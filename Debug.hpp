#ifndef DEBUG_
#define DEBUG_

#include <iostream>

#define PRINT(X); std::cout << X << std::endl;
#define DEBUG(); std::cerr <<"file: " __FILE__ << ":" << __LINE__ << std::endl \
                  << "f_prototype: " << __PRETTY_FUNCTION__ << std::endl;
#endif // !DEBUG

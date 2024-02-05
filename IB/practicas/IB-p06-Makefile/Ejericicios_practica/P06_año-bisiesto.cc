/** 
* 
* 
* 
* 
* 


*/

#include <iostream> 

int main () {
	int anyo;
	std::cin >> anyo;

	if (anyo % 400 == 0 || anyo % 4 == 0 && anyo % 100 != 0) {
		std::cout << "YES" << std::endl; 
	} else {
		std::cout << "NO" << std::endl;
	}
	return 0;
}

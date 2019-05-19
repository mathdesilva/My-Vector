#include <iostream>
#include <array>
#include <iterator>

#include "vector.h"

using namespace sc;

int main(){
	std::cout << ">>> STARTING SC::VECTOR TESTS\n\n";
	/*******************************************
								  STARTING TESTS								
	*******************************************/
	// Default constructor
	std::cout << ">>> Default constructor:\n";
	vector<int> vct1;
	std::cout << "Size:     " << vct1.size() << std::endl;
	std::cout << "capacity: " << vct1.capacity() << std::endl;

	std::cout << std::endl;

	// Size defined constructor
	std::cout << ">>> Size defined constructor:\n";
	vector<int> vct2(5);
	std::cout << "Size:     " << vct2.size() << std::endl;
	std::cout << "capacity: " << vct2.capacity() << std::endl;

	std::cout << std::endl;

	// First last constructor
	std::cout << ">>> First last constructor:\n";
	std::array< int, 4 > arr1 = {1, 2, 3, 4};
	vector<int> vct3( arr1.begin(), arr1.end() );
	std::cout << "Size:     " << vct3.size() << std::endl;
	std::cout << "capacity: " << vct3.capacity() << std::endl;
	std::cout << vct3[0] << " " << vct3[1] << " " << vct3[2] << " " << vct3[3] << std::endl;

	std::cout << std::endl;

	// Copy constructor
	std::cout << ">>> Copy constructor:\n";
	vector<int> vct4(vct3);
	std::cout << "Size:     " << vct4.size() << std::endl;
	std::cout << "capacity: " << vct4.capacity() << std::endl;
	std::cout << vct4[0] << " " << vct4[1] << " " << vct4[2] << " " << vct4[3] << std::endl;

	std::cout << std::endl;

	// initializer_list constructor
	std::cout << ">>> Initializer_list constructor:\n";
	vector<int> vct5 {2, 4, 6};
	std::cout << "Size:     " << vct5.size() << std::endl;
	std::cout << "capacity: " << vct5.capacity() << std::endl;
	std::cout << vct5[0] << " " << vct5[1] << " " << vct5[2] << std::endl;

	std::cout << std::endl;

	// operator= 
	std::cout << ">>> operator= (vector):\n";
	vector<int> vct6 = {1};
	vector<int> vct7 = {3, 3, 3, 3, 3};
	vct6 = vct7 = vct5;
	std::cout << "> Using vct6 = vct7 = vct5\n";
	std::cout << "VCT6\n";
	std::cout << "Size:     " << vct6.size() << std::endl;
	std::cout << "capacity: " << vct6.capacity() << std::endl;
	std::cout << vct6[0] << " " << vct6[1] << " " << vct6[2] << std::endl;
	std::cout << "VCT7\n";
	std::cout << "Size:     " << vct7.size() << std::endl;
	std::cout << "capacity: " << vct7.capacity() << std::endl;
	std::cout << vct7[0] << " " << vct7[1] << " " << vct7[2] << std::endl;

	std::cout << std::endl;

	//operator=
	std::cout << ">>> operator= (initializer_list):\n";
	vector<int> vct8 = {1};
	vector<int> vct9 = {3, 3, 3, 3, 3};
	vct8 = vct9 = {10, 20, 30};
	std::cout << "> Using vct8 = vct9 = {10, 20, 30}\n";
	std::cout << "VCT8\n";
	std::cout << "Size:     " << vct8.size() << std::endl;
	std::cout << "capacity: " << vct8.capacity() << std::endl;
	std::cout << vct8[0] << " " << vct8[1] << " " << vct8[2] << std::endl;
	std::cout << "VCT9\n";
	std::cout << "Size:     " << vct9.size() << std::endl;
	std::cout << "capacity: " << vct9.capacity() << std::endl;
	std::cout << vct9[0] << " " << vct9[1] << " " << vct9[2] << std::endl;



	/*******************************************
								    ENDING TESTS								
	*******************************************/
	std::cout << "\n>>> Ending tests\n";

	return EXIT_SUCCESS;
}
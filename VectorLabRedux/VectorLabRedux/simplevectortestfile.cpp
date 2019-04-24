//  File simplevectortestfile.cpp

#include <iostream>
#include "vectorutils.h"

//  This code performs *extremely* simple
//  tests.  This is only the first steps to any 
//  testing you may want to perform.  You must ensure
//  that your vectorstuff.cpp file compiles cleanly
//  with this file.  If the compiler generates errors 
//  when using your code and this code together, your 
//  code has no chance passing my more extensive test
//  suite.
//
//  Since this is only a very test simple suite, you should 
//  create more interesting tests in an attempt to reveal
//  the logic errors that may be lurking in your 
//  functions.

// Conveniently print the contents of a vector.
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
	os << '{';
	if (!vec.empty()) {
		auto iter = begin(vec);
		auto end_iter = end(vec);
		os << *iter++;
		while (iter != end_iter)
			os << ", " << *iter++;
	}
	os << '}';
	return os;
}

int main() {
	//  Make a small vector of integers
	std::vector<int> list{ 1, 5, 3, 10, 3, 7, 5, 2 };

	//  Some variables to ensure the function return types
	//  are properly assignable.
	int i;
	bool b;

	b = is_ascending(list);
	b = equivalent(list, list);
	i = remove_extras(list, 3);
	b = subsequence(list, list);
	partition_evens(list);
	equivalent({ 1, 1, 1, 1 }, { 1, 1, 1, 1 });
	std::vector<int> problemvec1{ 1,1,1,1, };
	std::vector<int> problemvec2{ 1,1,1,1, };
	std::cout << "prooblemvec1 & problemvec2 - Should output true: " << equivalent(problemvec1, problemvec2) << '\n';
//		Equivalent Tests
	std::cout << "Equivalent Tests" << '\n';
	std::vector<int> vec1{ 3, 2, 1, 100, 45, 67, 3 };
	std::vector<int> vec2{ 2, 3, 1, 3, 67, 100, 45 };
	std::vector<int> vec3{ 2, 1, 100, 45, 67, 3, 6 };
	std::vector<int> vec4{ 2, 1, 3, 67, 100, 45, 5 };
	std::vector<int> vec5{ 2, 1, 2, 3, 3, 1, 3 };
	std::vector<int> vec6{ 2, 3, 1, 1, 3, 2, 3 };
	std::vector<int> vec7{ 1, 3, 2, 3, 2, 3 };
	std::vector<int> vec8{ 2, 3, 2, 3, 1, 3 };
	std::vector<int> vec9{};
	std::vector<int> vec10{};
	std::vector<int> vec11{ 1, 3, 2, 3, 2, 3 };
	std::vector<int> vec12{ 1, 3, 2, 3, 2, 3 };
	std::vector<int> vec13{ 1, 3, 2, 3, 2, 3 };
	std::cout << "vec1 & vec2 - Should output true: " << equivalent(vec1, vec2) << '\n';
	std::cout << "vec2 & vec3 - Should output false: " << equivalent(vec2, vec3) << '\n';
	std::cout << "vec1 & vec6 - Should output false: " << equivalent(vec1, vec6) << '\n';
	std::cout << "vec1 & vec4 - Should output false: " << equivalent(vec1, vec4) << '\n';
	std::cout << "vec3 & vec4 - Should output false: " << equivalent(vec3, vec4) << '\n';
	std::cout << "vec5 & vec6 - Should output true: " << equivalent(vec5, vec6) << '\n';
	std::cout << "vec7 & vec8 - Should output true: " << equivalent(vec7, vec8) << '\n';
	std::cout << "vec9 & vec10 - Should output true: " << equivalent(vec9, vec10) << '\n';
	std::cout << "vec11 & vec12 - Should output true: " << equivalent(vec11, vec12) << '\n';
	std::cout << "vec13 & vec13 - Should output true: " << equivalent(vec13, vec13) << '\n';
	std::cout << std::endl;

}


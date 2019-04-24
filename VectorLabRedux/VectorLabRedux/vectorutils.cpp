//Liam Davidson
//Isaac Braun

#include <iostream>
#include <vector>

//Is Ascending Function
bool is_ascending(const std::vector<int>& vec) {
	for (unsigned i = 1; i < vec.size(); i++) {
		if (vec[i] < vec[i - 1]) {
			return false;
		}
	}
	return true;
}

//Count Function
int count(const std::vector<int>& v, int seek) {
	int amount = 0;
	for (unsigned i = 0; i < v.size(); i++) {
		if (v[i] == seek) {
			amount++;
		}
	}
	return amount;
}

//Equivalent Function
bool equivalent(const std::vector<int>& vec1, const std::vector<int>& vec2) {
	if (vec1.size() != vec2.size()) {
		return false;
	}
	for (int i = 0; i < vec1.size(); i++) {
		if (count(vec1, vec1[i]) != count(vec2, vec1[i])) {
			return false;
		}
	}
	if (vec1.empty() && vec2.empty()) {
		return true;
	}
	else{
		return true;
	}
}

//Remove Extra Function
int remove_extras(std::vector<int>& v, int del) {
	int erased = 0;
	int count = 0;
	bool first = false;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == del && count > 0) {
			int j = i;
			while (j < v.size() - 1) {
				v[j] = v[j + 1];
				j++;
			}
			v.pop_back();
			erased++;
			i--;
		}
		else if (v[i] == del && count == 0) {
			count++;
		}
	}
	return erased;
}

//Separate Evens from Odds and Move to the Front of Vector
void partition_evens(std::vector<int>& vec) {
	int n = vec.size();
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] % 2 == 0 || vec[i] == 0) {
			int j = i;
			if (i != 0) {
				while (j > k) {
					int temp = vec[j - 1];
					vec[j - 1] = vec[j];
					vec[j] = temp;
					j--;
				}
			}
			k++;
		}
	}
}

//Subsequence Function
bool subsequence(const std::vector<int>& vec1, const std::vector<int>& vec2) {
	int amount_in = 0;
	int counter = 0;

	if (vec2.empty()) {
		return true;
	}
	else if (vec1.size() < vec2.size()) {
		return false;
	}

	for (int i = 0; i < vec1.size(); i++) {
		for (unsigned j = counter; j < vec2.size(); j++)
			if (vec1[i] == vec2[j]) {
				amount_in++;
				counter = j + 1;
				break;
			}
	}

	if (amount_in == vec2.size()) {
		return true;
	}
	else {
		return false;
	}

}

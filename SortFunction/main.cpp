#include "SortFunction.h"
#include <algorithm>

int main(const int& argc, const char** argv)
{
	vector<int> arr = { 4, 7, 2, 5, 3, 9, 8, 1, 6, 0 };
	
	//ShellSorting(arr);
	SelectSorting(arr);

	std::for_each(arr.begin(), arr.end(), [](const int& num) { cout << num << " "; });
	cout << endl;

	return 0;
}
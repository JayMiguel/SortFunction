#include "SortFunction.h"

// ≤Â»Î≈≈–Ú
void InsertSorting(vector<int>& arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = key;
			j--;
		}
		arr[j + 1] = key;
	}
}

// œ£∂˚≈≈–Ú
void ShellSorting(vector<int>& arr)
{
	int n = arr.size();
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			int temp = arr[i];
			int j = i;
			while (j >= gap && arr[j - gap] > temp)
			{
				arr[j] = arr[j - gap];
				j -= gap;
				arr[j] = temp;
			}
		}
	}
}

// —°‘Ò≈≈–Ú
void SelectSorting(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		int min = arr[i];
		int minIndex = i;
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				minIndex = j;
			}
		}
		std::swap(arr[i], arr[minIndex]);
	}
}

// øÏÀŸ≈≈–Ú
void QuickSorting(vector<int>& arr, int left, int right)
{
	while (left < right)
	{
		if (arr[left] > arr[right])
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			right--;
		}
		else
		{
			left++;
		}
	}

	QuickSorting(arr, 0, left);
	QuickSorting(arr, left, );
}

// πÈ≤¢≈≈–Ú
vector<int> MergeSort(vector<int>& arr1, vector<int> arr2)
{
	vector<int> res;
	int i = 0; 
	int j = 0;

	while (i < arr1.size() && j < arr2.size())
	{
		if (arr1[i] < arr2[j])
		{
			res.push_back(arr1[i]);	
			i++;
		}
		else if (arr1[i] == arr2[j])
		{
			res.push_back(arr1[i]);
			res.push_back(arr2[j]);
			i++;
			j++;
		}
		else
		{
			res.push_back(arr2[j]);
			j++;
		}
	}

	if (i == arr1.size())
	{
		for (; j < arr2.size(); j++)
		{
			res.push_back(arr2[j]);
		}
	}
	else if (j == arr2.size())
	{
		for (; i < arr1.size(); i++)
		{
			res.push_back(arr1[i]);
		}
	}

	return res;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> MinArr(int arr[],int n, int m)
{
	vector<int> v;
	int i , j;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			v.push_back(0);
		}
		else if (i < m)
		{
			v.push_back(arr[i - 1]);
		}
		else
		{
			int min = arr[i - m];
			for (j = 0; j < i; j++)
			{
				if (arr[j] < min)
				{
					min = arr[j];
				}
			}
			v.push_back(min);
		}
	}
	return v;
}




int main()
{
	vector<int> vi;
	int arr[10] = { 4, 6, 1, 3, 4, 8, 9, 3, 2, 1 };
	vi = MinArr(arr, 5, 2);
	for (auto &i : vi)
	{
		cout << i << endl;
	}
	

	return 0;
}
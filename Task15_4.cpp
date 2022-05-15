#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int> vec = { -100,-50,-5,1,10,15 };
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size()-1; j++)
		{

			if (abs(vec[j]) > abs(vec[j+1]))
			{
				int temp = vec[j+1];
				vec[j+1] = vec[j];
				vec[j] = temp;
			}
			
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}


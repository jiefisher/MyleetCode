#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	unsigned int i;
	vector<int> result;
	unordered_map<int, int> hp;
	for (i = 0; i < nums.size(); i++)
		hp[nums[i]] = i;
	for (i = 0; i < nums.size(); i++)
	{
		int t = target - nums[i];
		if (hp.find(t) != hp.end())
		{
			if (hp[t] != i)
			{
				result.push_back(i);
				result.push_back(hp[t]);
				break;
			}
		}
	}
	return result;
}
int main()
{
	vector<int > a = { 2,7,11,15 };
	int tar = 9;
	cout<<twoSum(a, tar)[0];
	cout << twoSum(a, tar)[1];
}
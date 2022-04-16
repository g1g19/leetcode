#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution
{
public:
	vector<int> twosumv1(vector<int>& nums, int target)
	{
		unordered_map<int, int> hashmap;
		vector<int> result;
		// Insert elements into hashmap
		int i = 0;
		while(i < nums.size())
		{
			hashmap.insert(std::pair<int,int>(nums[i], i));
			i++;
		}

		// Check if target-nums[i] exists in hashmap
		
		for(int i = 0; i < nums.size(); i++)
		{
			int search = target-nums[i];

			if(hashmap.find(search) != hashmap.end())
			{
				int j = hashmap.at(search);

				if(i!=j)
				{
					result.push_back(i);
					result.push_back(j);
					return result;	
				}
			}
		}

		return result;	
	}
};


int main(void)
{
	Solution Sl;
	vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);
	input.push_back(4);

	vector<int> result = Sl.twosumv1(input, 6);

	cout << "["<< result[0] << "," << result[1] << "]" << endl;

	return 0;
}

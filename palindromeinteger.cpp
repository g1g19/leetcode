#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
		//Brute Force solution
		bool isPalindrome(int x)
		{
			if(x < 0)
				return false;

			vector<int> digits;
			
			while(x != 0)
			{
				digits.push_back(x%10);
				x /= 10;
			}
			
			int i = 0, j = digits.size()-1;
			
			while(i < j)
			{
				if(digits[i] != digits[j])
				{
					return false;
				}
				i++;
				j--;
			}
			
			return true;
		}

		// Improvised
	
		bool isPalindromev2(int x)
		{
			if(x < 0) return false;

			int temp = x;
			unsigned int sum = 0;
		
			while( temp > 0)
			{
				sum = (sum*10) + (temp%10);
				temp /= 10;	
			}

			return (sum == x);
		}
};

int main(void)
{
	Solution sl;

	cout << "isPalindrome" << sl.isPalindrome(666) << endl;

	cout << "isPalindrome" << sl.isPalindrome(1221) << endl;

	cout << "isPalindrome" << sl.isPalindrome(12321) << endl;

	cout << "isPalindrome" << sl.isPalindrome(12345) << endl;

	return 0;
	
}
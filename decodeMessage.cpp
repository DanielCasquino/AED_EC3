#include <iostream>
#include <cassert>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	string decodeMessage(string key, string message)
	{
		string abc = "abcdefghijklmnopqrstuvwxyz";
		std::unordered_map<char, char> map;
		int ct{};
		for (const char c : key)
		{
			if (c != " "[0] && map.insert({c, abc[ct]}).second)
			{
				++ct;
			};
		}
		string res;
		for (const char c : message)
		{
			if (c != " "[0])
			{
				auto searchRes = map.find(c);
				if (searchRes->second)
				{
					res += searchRes->second;
				}
			}
			else
			{
				res += " ";
			}
		}
		return res;
	}
};

void test()
{
	assert(Solution().decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") == "this is a secret");
	assert(Solution().decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb") == "the five boxing wizards jump quickly");
	assert(Solution().decodeMessage("algorimos abc defghi jkl mno pqrstu vwxyz datos", "holamundoutec") == "ndbaguqkdutlj");
	assert(Solution().decodeMessage("abcdefghijklmnopqrstuvwxyz", "i love lourdes") == "i love lourdes");
}

int main()
{
	test();
	return 0;
}

#include <iostream>
#include <cassert>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
		// add your code
		
        return "utec";
    }
};

void test(){
	assert(Solution().decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") == "this is a secret");
	assert(Solution().decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb") == "the five boxing wizards jump quickly");
	assert(Solution().decodeMessage("algorimos abc defghi jkl mno pqrstu vwxyz datos", "holamundoutec") == "ndbaguqkdutlj");
	assert(Solution().decodeMessage("abcdefghijklmnopqrstuvwxyz", "i love lourdes") == "i love lourdes");
}

int main(){
	test();
	return 0;
}

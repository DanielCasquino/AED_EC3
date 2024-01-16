#include <iostream>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
		// add your code 
		
		return 0;
    }
};

void test(){
	assert(Solution().maxNumberOfBalloons("nlaebolko") == 1);
	assert(Solution().maxNumberOfBalloons("loonbalxballpoon") == 2);
	assert(Solution().maxNumberOfBalloons("baalooncokjanshbalokkbalooknlnno") == 2);
	assert(Solution().maxNumberOfBalloons("nobalonccoooouuugklllllonxxxxzzzz") == 1);
	assert(Solution().maxNumberOfBalloons("jkabdikljiurgjhbsadfkjfuabasdfjdfuahdbao") == 0);
}

int main(){
	test();
	return 0;
}

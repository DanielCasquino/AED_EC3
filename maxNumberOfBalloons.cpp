#include <iostream>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
		int b = 0, a = 0, l = 0, o = 0, n = 0;
		for (char c : text){
			if (c == 'b') b++;
			else if (c == 'a') a++;
			else if (c == 'l') l++;
			else if (c == 'o') o++;
			else if (c == 'n') n++;
		}
		int ans = 0;
		while (b >= 1 && a >= 1 && l >= 2 && o >= 2 && n >= 1){
			ans++;
			b--;
			a--;
			l -= 2;
			o -= 2;
			n--;
		}
		return ans;
    };
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

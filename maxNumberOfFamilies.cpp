#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // add your code
        
        return 2;
    }
};

void test(){
	vector<vector<int>> reservedSeats =  {{2, 1}, {1, 8}, {2, 6}};
	assert(Solution().maxNumberOfFamilies(2, reservedSeats) == 2);
	
	reservedSeats =  {{4, 3}, {1, 4}, {4, 6}, {1, 7}};
	assert(Solution().maxNumberOfFamilies(4, reservedSeats) == 4);
	
	reservedSeats =  {{1,2},{1,3},{1,8},{2,6},{3,1},{3,10}};
	assert(Solution().maxNumberOfFamilies(3, reservedSeats) == 4);
	
	reservedSeats =  {{1,1},{1,4},{1,7},{2,5},{3,2},{3,10}};
	assert(Solution().maxNumberOfFamilies(3, reservedSeats) == 2);
}

int main(){
	test();
	return 0;
}

#include "Solution.h"




int main()
{

	vector<int> input = { 1,2,3,4,5,6,7 };
	vector<int> nums1 = { 1, 2, 2, 1 }, nums2 = { 2, 2 };

	Solution sol;
	sol.intersect(nums1,nums2);


	return 0;
}
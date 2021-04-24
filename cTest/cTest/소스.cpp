#include "Solution.h"




int main()
{

	//vector<int> input = { 1,2,3,4,5,6,7 };
	//vector<int> nums1 = { 1, 2, 2, 1 }, nums2 = { 2, 2 };

	vector<int>nums = { 3,2,4 };
	int target = 6;

	Solution sol;
	//sol.intersect(nums1,nums2);
	sol.twoSum(nums, target);

	return 0;
}
#include "Solution.h"

void Solution::rotate(vector<int>& nums, int k)
{
	int n = nums.size();
	int count = 0;//,start=0;

	k %= n;

	for (auto i : nums)
		cout << i << "\t";
	cout << endl;
	cout << "Start!!" << endl;

	cout << "================================" << endl;


	for (int start = 0; count < nums.size(); start++) {//while(count<n){

		int cur = start, prev = nums[start];

		do {
			int next = (cur + k) % n;

			cout << "cur : " << cur << endl;
			cout << "Next : " << next << endl;
			cout << "start : " << start << endl;

			//swap(nums[cur],nums[next]);                
			int temp = nums[next];
			nums[next] = prev;
			prev = temp;
			cur = next;

			count++;


			for (auto i : nums)
				cout << i << "\t";
			cout << endl;


			cout << "================================" << endl;



		} while (cur != start);
		cout << "hi" << endl;
		//start++
	}

}

vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2)
{
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	vector<int>Answer;


	int prevBreakPoint = 0;

	for (int i = 0; i < nums1.size(); ++i)
	{
		cout << "nums1 value : " << nums1[i] << endl;

		for (int j = prevBreakPoint; j < nums2.size(); j++)
		{
			if (nums1[i] < nums2[j])
			{
				prevBreakPoint = j;

				break;
			}
			if (nums1[i] > nums2[j])
			{
				continue;
			}
			if (nums1[i] == nums2[j])
			{

				prevBreakPoint = j+1;

				/*auto it = find(Answer.begin(), Answer.end(), nums2[j]);
				if (it == Answer.end())*/
					Answer.push_back(nums1[i]);


				break;
			}

		}

	}

	for (auto it : Answer)
		cout << it << "\t";
	cout << endl;

	return Answer;
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	vector<int>answer;

	return answer);
}
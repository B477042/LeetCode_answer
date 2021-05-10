#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;


class Solution
{
public:
	void rotate(vector<int>& nums, int k);
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
	vector<int> twoSum(vector<int>& nums, int target);
	int singleNumber(vector<int>& nums);
	int myAtoi(string s);
	void reverseString(vector<char>& s);
	bool bIsLetter(const char&input,bool bIsFirst);
};


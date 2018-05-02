//#include <iostream>
//#include <vector>
//#include <set>
//#include<algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target) {
//		//返回所有可能的组合的容器
//
//		set<vector<int>> vv_Ret;
//		vector<vector<int>> Ret;
//		int nLen = nums.size();
//		if (nLen<4)
//		{
//			return Ret;
//		}
//
//		sort(nums.begin(),nums.end());
//		for (int a = 0; a<nLen-3;a++)
//		{
//			for (int b = a+1; b<nLen-2;b++)
//			{
//				int nTempTarget = target-nums[a]-nums[b];
//				int c = b+1;
//				int d = nLen-1;
//
//				while (c<d)
//				{
//					int nNowSum =  nTempTarget-nums[c]-nums[d];
//					if (nNowSum < 0)
//					{
//						d--;
//						continue;
//					}
//					else if (nNowSum > 0)
//					{
//						c++;
//						continue;
//					}
//					else if (nNowSum == 0)
//					{
//						vector<int> vTemp;
//						vTemp.push_back(nums[a]);
//						vTemp.push_back(nums[b]);
//						vTemp.push_back(nums[c]);
//						vTemp.push_back(nums[d]);
//						vv_Ret.insert(vTemp);
//						
//						c++;
//					}
//				}
//			}
//		}
//	/*	vector<vector<int>>::iterator iter;
//		iter = unique(vv_Ret.begin(),vv_Ret.end());
//		if(iter != vv_Ret.end()){
//			vv_Ret.erase(iter,vv_Ret.end());
//		}*/
//
//		
//		for (set<vector<int>>::iterator ite = vv_Ret.begin(); ite!= vv_Ret.end();ite++)
//		{
//			Ret.push_back(*ite);
//		}
//		return Ret;
//	}
//};
//
//int main()
//{
//	int nArr[] ={-3,-2,-1,0,0,1,2,3};
//	vector<int> v_input(nArr,nArr+sizeof(nArr)/sizeof(int));
//	vector<vector<int>> vv_out = Solution().fourSum(v_input,0);
//	system("pause");
//	return 1;
//}
#include<iostream>
using namespace std;
void rotate(vector<int>& nums, int k) {
        int a=sizeof(nums)/sizeof(nums[0]);
        vector<int> temp;
        int n=0;

        for(int i=k;i<a; i++)
        {
            temp[n] = nums[i];
            n++;
        }

        for(int i=0; i<k; i++)
        {
            temp[n]=nums[i];
            n++;
        }

        for(int i=0; i<n; i++)
        {
            nums[i]=temp[i];
        }

        for(int i=0; i<n; i++)
        {
            cout<<nums[i]<<" ";
        }
        
    }

    int main()
    {
        int k=2,k=0;
        vector<int> nums;
        for(int i=0; i<8 ; i++)
        {
            nums[i]=r;
            r++;
        }
    }

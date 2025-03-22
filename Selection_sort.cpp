#include<iostream>
#include <vector>
using namespace std;

void Selection_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i = 0;i<n-1;i++)
    { int minIndex = i;
        for(int j = i + 1;j < n;j++){
         if (nums[j]<nums[minIndex])
         {
            minIndex=j;
         }
      }

      swap(nums[i], nums[minIndex]);
    }

}

int main(){
    int n;
    cout << "请输入数组长度: ";
    cin >> n;

    vector<int> nums(n);
    cout << "请输入 " << n << " 个整数，用空格分隔:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 调用选择排序
    Selection_sort(nums);

    // 输出排序后的数组
    cout << "排序后的数组: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



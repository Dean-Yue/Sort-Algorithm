#include<iostream>
#include<vector>

using namespace std;

void bubblesort(vector<int>&nums)
{
    int n = nums.size();
    bool swapped;

 for(int i = 0;i <n-1;i++){
    swapped = false;
    for(int j = 0;j <n-1-i;j++){
        if(nums[j]>nums[j+1])
        {
            swap(nums[j],nums[j+1]);
            swapped = true;
        }

     if (!swapped)
     {
        break;
     }
    }
 }

}
     
int main() {
    int n;
    cout << "请输入数组长度: ";
    cin >> n;

    vector<int> nums(n);
    cout << "请输入 " << n << " 个整数，用空格分隔:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 调用冒泡排序
    bubblesort(nums);

    // 输出排序结果
    cout << "排序后的数组: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
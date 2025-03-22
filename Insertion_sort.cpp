#include<iostream>
#include <vector>
using namespace std;

void Insertion_sort(vector<int>& nums){
  int n = nums.size();


  for(int i = 1;i<n-1;i++){
    int key = nums[i];
    int j = i - 1;

     while(j>=0 && nums[j]>key)
     {
        nums[j+1]=nums[j];
        j--;

     }

       nums[j+1]=key;
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

    // 调用插入排序
    Insertion_sort(nums);

    // 输出排序后的数组
    cout << "排序后的数组: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
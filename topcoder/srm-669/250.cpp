#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4};
  vector<int> v(arr, arr+sizeof(arr) / sizeof(arr[0]));
  vector<int>::iterator min = min_element(v.begin(), v.end());
  vector<int>::iterator max = max_element(v.begin(), v.end());
  int ret = 0;
  int maxValue = *max;
  int minValue = *min;
  v.erase(max);
  while(v.size()) {
      ret += maxValue * minValue;
      maxValue = maxValue + minValue;
  }
  return 0;
}
// @author aliabdallah
// #includes {{{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <functional>
#include <math.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
#include <list>
#include <iomanip>
#include <cmath>
#include <stack>
#include <complex>
#include <valarray>
using namespace std;
// }}}

int main()
{
  int n, m, l, r;
  cin >> n >> m;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ret = 0;
  for(int i = 0; i < m; i++) {
    cin >> l >> r;
    int sum = 0;
    for(int j = l-1; j < r; j++) {
      sum += v[j];
    }
    if (sum > 0)
      ret += sum;
  }
  cout << ret;
  return 0;
}
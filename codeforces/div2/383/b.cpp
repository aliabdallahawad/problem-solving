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
  int n, x, tmp;
  long long result = 0;
  cin >> n >> x;
  map<int, int> m;
  for(int i = 0; i < n; i++) {
    cin >> tmp;
    int tmp2 = tmp ^ x;
    result += m[tmp2];
    m[tmp]++;
  }
  cout << result;
  return 0;
}
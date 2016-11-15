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

bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
  return a.second<b.second;
}

int main()
{
  long long n, m, k, x, s, i, j, result, calc;
  bool flag = true;
  cin >> n >> m >> k;
  cin >> x >> s;
  vector<pair<long long, long long> > spell1(m, pair<long long, long long>(0, 0)), spell2(k, pair<long long, long long>(0, 0));
  for(i = 0; i < m; i++) {
    cin >> spell1[i].first;
  }
  for(i = 0; i < m; i++) {
    cin >> spell1[i].second;
  }
  for(i = 0; i < k; i++) {
    cin >> spell2[i].first;
  }
  for(i = 0; i < k; i++) {
    cin >> spell2[i].second;
  }
  sort(spell1.begin(), spell1.end(), myComparison);
  result = n*x;
  j = k-1;
  for(i = 0; i < m; i++) {
    long long points = s;
    if (points - spell1[i].second >= 0) {
      flag = false;
      points -= spell1[i].second;
      while(j >= 0) {
        if (points - spell2[j].second >= 0) {
          calc = spell2[j].first > n ? 0 : (n - spell2[j].first) * spell1[i].first;
          result = min(result, calc);
          break;
        } else {
          j--;
        }
      }
      calc = n * spell1[i].first;
      result = min(result, calc);
    }
  }
  for(i = 0; i < k; i++) {
    if (s - spell2[i].second >= 0) {
      calc = spell2[i].first > n ? 0 : (n - spell2[i].first) * x;
      result = min(result, calc);
    } else {
      break;
    }
  }
  cout << result;
  return 0;
}
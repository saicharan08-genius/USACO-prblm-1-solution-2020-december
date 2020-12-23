#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector<int> vec;
  int a , b , c , d , e , f , g;
  cin >> a >> b >> c >> d >> e >> f >> g;
  vec.push_back(a);
  vec.push_back(b);
  vec.push_back(c);
  vec.push_back(d);
  vec.push_back(e);
  vec.push_back(f);
  vec.push_back(g);
  sort(vec.begin() , vec.end());
  int SumOfThreeNumbers = *max_element(vec.begin() , vec.end());
  int lastNumber = SumOfThreeNumbers - vec[0] - vec[1];
  cout << vec[0] << " " << vec[1] << " " << lastNumber;
}

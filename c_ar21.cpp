/* 成績統計 */
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(0);

  double math = 0;
  double eng = 0;
  double chin = 0;
  double total = 0;
  double tmp1, tmp2, tmp3;
  int n;

  cin>>n;
  for(int k=0; k<n; k++){
    cin>>tmp1>>tmp2>>tmp3;
    chin += tmp1;
    eng += tmp2;
    math += tmp3;
  }
  //求平均
  math /= n;
  chin /= n;
  eng /= n;
  total = (math+chin+eng)/3;

  //四捨五入 //不知道為甚麼直接用cout+setiosflags+setprecision過不了
  math = floor((math+0.05)*10)/10;
  chin = floor((chin+0.05)*10)/10;
  eng = floor((eng+0.05)*10)/10;

  cout << setiosflags(ios::fixed);
  cout << setprecision(1)<<total<<' ';
  cout << setprecision(1)<<chin<<' ';
  cout << setprecision(1)<<eng<<' ';
  cout << setprecision(1)<<math<<'\n';

  return 0;
}

/* 平方和 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(0);

  double total = 0;
  double input;

  while(cin>>input){
    total += input*input;
  }
  cout << setiosflags(ios::fixed) << setprecision(6) << total << '\n';

  return 0;
}

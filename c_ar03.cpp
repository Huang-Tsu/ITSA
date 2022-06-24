/* 數字分解 */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(0);

  int total = 0;
  int input;

  while(cin>>input){
    total += input*input*input;
  }
  cout<<total<<'\n';

  return 0;
}

/* 數字分解 */
#include <iostream>
using namespace std;

void Decomposition(int input, int i){
  if(input == i){
    cout<<input<<'\n';
    return;
  }
  else{
    if(input-i<i+1){
      cout<<input<<'\n'; 
      return;
    }
    else{
      cout<<i<<'+';
      Decomposition(input-i, i+1);
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false), cin.tie(0);

  int input;

  cin>>input;
  if(input == 0){
    cout<<0<<'\n';
  }
  else{
    Decomposition(input, 1);
  }

  return 0;
}

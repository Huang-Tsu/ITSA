/* count ascii character */
#include <iostream>
#include <map>
using namespace std;

int main(){
  string input;
  map<int, int> cnt;
  //while(getline(cin, input)){
  getline(cin, input);
    for(int i=0; i<input.size(); i++){
      if(cnt.find(input.at(i)) != cnt.end()){
        cnt[input[i]] ++;
      }
      else{
        cnt[input[i]] = 1;
      }
    }
    for(auto iter=cnt.rbegin(); iter!=cnt.rend(); iter++){
      cout<<iter->first<<' '<<iter->second<<'\n';
    }
    input.clear();
    cnt.clear();
  //}

  return 0;
}

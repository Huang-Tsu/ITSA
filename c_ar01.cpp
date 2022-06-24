#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
  stringstream ss;
  vector<int> num(101);
  string temp;
  int temp_num;

  num.clear();
  temp.clear();
  ss.clear();
  while(getline(cin, temp)){
    ss<<temp;
    while(ss>>temp_num && !ss.fail()){
      num.push_back(temp_num);
    }
    
    for(auto iter=num.rbegin(); iter!=num.rend()-1; iter++){
      cout<<*iter<<' ';
    }
    cout<<num[0]<<'\n';

    num.clear();  //initialize
    temp.clear();
    ss.str("");
    ss.clear();
  }
  
  return 0;
}


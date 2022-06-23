/* difference */
#include <iostream>
#include <cctype>
using namespace std;

int main(){
  string input;
  string table;
  string output;
  string str;
  int i;

  input.clear();
  table.clear();
  output.clear();

  cin>>table;
    getline(cin, str);  //skip new line
  getline(cin, input);
  for(const auto &iter : input){
    if(isalpha(iter)){
      output += table[toupper(iter)-'A'];
    }
  }
  cout<<output[0];
  for(i=1; i<output.size(); i++){
    if(i%5 == 0){
      cout<<' '<<output[i];
    }
    else{
      cout<<output[i];
    }
  }
  for(i; i%5!=0; i++){
    cout<<'-';
  }
  cout<<'\n';
  
  return 0;
}

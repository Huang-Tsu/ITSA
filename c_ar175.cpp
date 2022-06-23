/* sort number */
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(char a, char b){ return (a<b); };

int main(){
  char input[6];
  char output[4];
  int out_cnt = 0;
  int i, j;

  cin>>input>>i>>j;
  i -= 1;
  j -= 1;
  for(int k=0; k<5; k++){
    if(k!=i && k!=j){
      output[out_cnt++] = input[k];
    }
  }
  output[3] = '\0';
  sort(output, output+3, comp);
  cout<<output<<'\n';
  return 0;
}

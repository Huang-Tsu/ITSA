/* difference */
#include <iostream>
using namespace std;

void swap(int &a, int&b){
  int temp = a;
  a = b;
  b = temp;
}
int main(){
  char input[5];
  int output[5];

  cin>>input;
  for(int i=0; i<4; i++){
    //output[i] = dynamic_cast<char>((atoi(output[i])+7)%10);
    output[i] = (input[i]-'0'+7)%10;
  }
  swap(output[0], output[2]);
  swap(output[1], output[3]);

  for(int i=0; i<4; i++){
    cout<<output[i];
  }
  cout<<'\n';
  return 0;
}

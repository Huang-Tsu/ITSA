/* car count */
#include <iostream>
#include <map>
using namespace std;

int main(){
  int n;
  int start, end;
  int hour[25] = {0};
  int max = 0;

  cin>>n;
  while(n--){
    cin>>start>>end;
    for(int i=start; i<end; i++){
      hour[i] ++;
    }
  }
  for(int i=1; i<=24; i++){
    if(hour[i]>max){
      max = hour[i];
    }
  }
  cout<<max<<'\n';
  return 0;
}

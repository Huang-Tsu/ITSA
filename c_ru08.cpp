/* bouncing ball */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  //ios_base::sync_with_stdio(false), cin.tie(0);
  double input;
  double total;

  while(cin>>input){
    total = input;
    for(double i=input/2; i>=1; i/=2){
      total += i*2; 
    }
    total = floor((total+0.005)*100) / 100;
    cout << setiosflags(ios::fixed) << setprecision(2) << total << '\n';
  }

  return 0;
}

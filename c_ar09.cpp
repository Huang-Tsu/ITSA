/* difference */
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool comp_smaller(int i, int j){ return (i<j); }
bool comp_bigger(int i, int j){ return (i>j); }
int main(){
  char num[10];
  int num_cnt=0;
  char input;
  int big, small;
  
  while((input=getchar()) != EOF){
    if(isdigit(input)){
      num[num_cnt++] = input;
    }
  }

  sort(num, num+num_cnt, comp_bigger), big = atoi(num);
  sort(num, num+num_cnt, comp_smaller), small = atoi(num);

  cout<<big-small<<'\n';
  return 0;
}

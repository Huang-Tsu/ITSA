/* 數字分解 */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int GetNum(char *input){
  int sum = 0;
  char num[2048];
  char re_num[2048];
  char *ptr, *qtr;
  int i, j;
  ptr = input;
  qtr = num;
  while(*ptr){  //每次取出input裡的其中一段數字
    qtr = num;
    while(*ptr && !isdigit(*ptr)){  //skip none-digit
      ptr++;
    }
    while(*ptr && isdigit(*ptr)){ //read consecutive digit
      *qtr++ = *ptr++;
    }
    *qtr = '\0';
    for(i=strlen(num)-1, j=0; i>-1; i--, j++){  //reverse
      re_num[j] = num[i];
    }
    re_num[j] = '\0';

    sum += atoi(re_num);  //convert to digit
  }

  return sum;
}
int main(){
  ios_base::sync_with_stdio(false), cin.tie(0);

  char input[2048];
  int sum = 0;


  while(cin>>input){
    sum += GetNum(input);
  }
  cout<<sum<<'\n';

  return 0;
}

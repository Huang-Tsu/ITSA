#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cstring>
using namespace std;

int main(){
  string input;
  char test;
  int len;
  vector<char> num(1024);
  num.clear();
  stack<char> stack_op;

  getline(cin, input, '\n');
  len = input.size();

  for(int i=0; i<len; i++){
    test = input[i]; 
    if(test == ' '){
      if(!num.empty()){
        for(auto i : num){
          cout<<i;
        }
        cout<<' ';
        num.clear();
      }
      continue;
    }
    //if this is a digit or alpha or space, print it, and go no reading next character
    if(isalnum(test)){
      num.push_back(test);
      continue;
    }
    if(!num.empty()){
      for(auto i : num){
        cout<<i;
      }
      cout<<' ';
      num.clear();
    }

    //pop operator in stack_op according to input operator
    if(test=='+' || test=='-'){
      while(!stack_op.empty() && stack_op.top()!='('){  //print until '('
        //cout<<stack_op_op[--op_cnt]<<' ';
        cout<<stack_op.top()<<' ';
        stack_op.pop();
      }
    }
    else if(test=='*' || test=='/'){
      while(!stack_op.empty() && stack_op.top()!='(' && stack_op.top()!='+' && stack_op.top()!='-'){
        //cout<<stack_op_op[--op_cnt]<<' ';
        cout<<stack_op.top()<<' ';
        stack_op.pop();
      }
    }
    else if(test=='^'){
      while(!stack_op.empty() && stack_op.top()!='(' && stack_op.top()!='+' && stack_op.top()!='-' && stack_op.top()!='*' && stack_op.top()!='/'){  //print until '('
        //cout<<stack_op_op[--op_cnt]<<' ';
        cout<<stack_op.top()<<' ';
        stack_op.pop();
      }
    }
    else if(test==')'){
      while(!stack_op.empty() && stack_op.top()!='('){  //print until '('
        cout<<stack_op.top()<<' ';
        stack_op.pop();
      }
      stack_op.pop(); //pop '('
      continue;
    }
    stack_op.push(test);
  }
      if(!num.empty()){
        for(auto i : num){
          cout<<i;
        }
        cout<<' ';
        num.clear();
      }

  while(stack_op.size()>1){
    cout<<stack_op.top()<<' ';
    stack_op.pop();
  }
  cout<<stack_op.top()<<'\n';
}

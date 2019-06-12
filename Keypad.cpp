#include <string>
#include<map>
using namespace std;
map<int,string> m;

int helper (int n, string output[]){
  if(n==0){
    output[0]="";
    return 1;
  }
  string* output1=new string[1000000];
  int smallsize=helper(n/10,output1);
  string s=m[n%10]; int l=s.size();
  int k=0;
  for(int j=0;j<l;j++){
  	  for(int i=0;i<smallsize;i++){
        output[k]=output1[i]+s[j];
        k++;
      }
  }
  return l*smallsize;
}

int keypad(int num, string output[]){
  m[0]="";
  m[1]="";
  m[2]="abc";
  m[3]="def";
  m[4]="ghi";
  m[5]="jkl";
  m[6]="mno";
  m[7]="pqrs";
  m[8]="tuv";
  m[9]="wxyz";
  return helper(num,output);
}


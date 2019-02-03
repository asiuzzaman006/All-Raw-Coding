#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 


  void StringMultiply(string num1,string num2)
{
  int SizeOfNum1=num1.size();
  int SizeOfNum2=num2.size();

  if(SizeOfNum1==0 or SizeOfNum2==0) cout<<"Result is ZERO"<<endl;

    vector<int>Result(SizeOfNum2+SizeOfNum1,0);


    int pos1=0,pos2=0;


    for(int i=SizeOfNum1-1;i>=0;i--)
    {
      int carry=0;

      int temp1=num1[i]-'0';

      pos2=0;


      for(int j=SizeOfNum2-1;j>=0;j--)
      {

        int temp2=num2[j]-'0';

        int sum=temp1*temp2+Result[pos1+pos2]+carry;
        carry=sum/10;

        Result[pos1+pos2]=sum%10;
        pos2++;
      }
      if(carry>0)
        Result[pos1+pos2]=carry;

      pos1++;
    }


     int i=Result.size()-1;
     
    while(i>=0 and Result[i]==0) {
        i--;
    }

    if(i==-1) cout<<"Zero"<<endl;


    string s="";
    while(i>=0) {
        s+=to_string(Result[i--]);
    }

  cout<<s<<endl;

}


int main()
{
  #ifdef asiuzzaman
  read(); write();
  #endif
      
     string num1,num2;
      num1="1144551";
      num2="4730";

      StringMultiply(num1,num2);
     
        
}
//Himanshu Kumar
//Date: 03/01/22

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  string enc="";
  int i=0,j=0;
  while(j<src.length()){
      while(src[i]==src[j]){
          j++;
      }
      
      enc += src[i]+ to_string(j-i);
      i=j;
  }
  return enc;
}     
 

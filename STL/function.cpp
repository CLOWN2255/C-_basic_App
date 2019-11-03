#include<iostream>
#include<functional>
#include<map>
using namespace std;
int add(int i,int j){return i+j;}
int reduce(int i,int j){return i-j;}
int multiplication(int i,int j){return i*j;}
int division(int i,int j){return i/j;}
int main(void)
{
	//function<int(int,int)> fun=addi;
        map<char,function<int(int,int)>> fun={ {'+',add},
		                              {'-',reduce},
					      {'*',multiplication},
					      {'/',division}};
        char c;
	while(1)
	{
	  cin>>c;
	  if(c=='q')
		  break;
	  if(c=='+')
	 cout<<fun['+'](2,3)<<endl;
	  if(c=='-')
          cout<<fun['-'](2,3)<<endl;
	  if(c=='*')
           cout<<fun['*'](2,3)<<endl;
	  if(c=='/')
	    cout<<fun['/'](2,3)<<endl;
	}

	return 0;
}

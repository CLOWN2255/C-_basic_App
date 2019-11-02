#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<string> split(string str,string splite)
{
	str+=splite;
	/*目的是能够准确的使用str.substr(int,int)，
	 * 如果不这样的话，当主字符串末尾没有分割字符串的时候，那么
	 * find函数返回值会大于主字符串的长度,程序就不会执行if以里的语句
	 * 然后error.
	 * */
	string::size_type  size=str.size();
	int pos;
	string str1;
	vector<string> result;
	for(int i=0;i<size;i++)
	{
	     pos=str.find(splite,i);
             if(pos<size)
	     {
	      str1=str.substr(i,pos-i);
              result.push_back(str1);
	      i=pos+splite.size()-1;
	     }
	}
	return result;
}
int main(void)
{
	string str=",qwedadfd";
	string str1=",";
	vector<string> vec=split(str,str1);
	for(auto a:vec)
	 cout<<a;
	return 0;
}
	 
int main1(void)
{
	/**string str="qwe,qwqe,eqef";
	string str1=",";
	string str2**/
	char s[]="sadad asds,asdas";
	const char *d=", ";
	char *p=strtok(s,d);
	while(p)
	{
	   cout<<p;
	   p=strtok(NULL,d);
	}
	return 0;
}

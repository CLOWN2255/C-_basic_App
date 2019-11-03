#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;
void Init(map<string,int> &a)
{
	string str;
	int num;
	while(cin>>str)
	{
		if(str=="stop")
		 break;
		//a[str]++;
		cin>>num;
	pair<map<string,int>::iterator,bool>  
	pair= a.insert(map<string,int>::value_type (str,num));
	if(!pair.second)
		pair.first->second++;
	}
}
void Init(multimap<string,int> &a)
{
	string str;
	int num;
	while(cin>>str)
	{
		if(str=="stop")
			break;
		cin>>num;
		a.insert({str,num});
	}
}
void Traverse(const multimap<string,int> &a)
{
       
       	for(auto beg=a.lower_bound("joker"),end=a.upper_bound("joker");                       beg!=end;beg++)
                 cout<<beg->second<<endl;
       
       /*for(const auto b:a)
	{
		cout<<"First="<<b.first<<endl;
		cout<<"Second="<<b.second<<endl;
	}*/
}


void Traverse(const map<string,int> &a)
{
	for(const auto b:a)
	{
	  	cout<<"Frist="<<b.first<<endl;
 	        cout<<"Second="<<b.second<<endl;
	}
}
void Init(set<string> &a)
{
	string str;
	while(cin>>str)
	{
		if(str=="stop")
			break;
		a.insert(str);
	}
}
void Traverse(const set<string> &a)
{
	for(const auto b:a)
		cout<<"string="<<b<<endl;
}
void Init(unordered_map<string,int> &a)
{
	string str;
	int num;
	while(cin>> str)
	{
		if(str=="stop")
			break;
		cin>>num;
		pair<unordered_map<string,int>::iterator,bool>
			pa=a.insert({str,num});
		if(!pa.second)
			pa.first->second++;
	}
}
void Traverse(const unordered_map<string,int> &a)
{
       //同一关键字遍历
	/*for(auto beg=a.lower_bound("joker"),end=a.upper_bound("joker")
			beg!=end;beg++)
		cout<<beg->second<<endl;
		*/
        for(const auto b:a)
	{
		cout<<"First="<<b.first<<endl;
	        cout<<"Second="<<b.second<<endl;
	}
}

int main(void)
{
	//map<string,int> a;
       // set<string> a;
       //unordered_map<string,int> a;
	multimap<string,int> a;
	Init(a);
	Traverse(a);
	return 0;
}

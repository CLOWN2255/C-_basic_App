#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;
void Init(vector<int> &a)
{
	istream_iterator<int> begin(cin);
	istream_iterator<int>  end;
	while(begin!=end)
	{
		a.push_back(*begin++);
	}
}
void Sort(vector<int> &a)
{
	sort(a.begin(),a.end());
	//sort(a.rbegin(),a.rend());
}
void Traverse(const vector<int> a)
{
	//for(const auto b:a)
	//	cout<<b<<" ";
	vector<int>::const_reverse_iterator it=a.crbegin();
	while(it!=a.crend())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}
void Traverse(const list<int> a)
{
	for(const auto b:a)
		cout<<b<<" ";
	cout<<endl;
}

int main(void)
{
       /* vector<int> a;
	Init(a);
	Sort(a);
	Traverse(a);
	*/
	list<int> a={1,4,2,3};
	list<int> b={7,6,8,9};
	a.merge(b);
	int x=5;
	a.remove_if([x](int n){return n<=5;});
      //  a.remove(9);
  	//a.reverse();
	Traverse(a);	
	return 0;
}

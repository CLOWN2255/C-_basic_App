#include<iostream>
#include<deque>
#include<vector>
#include<forward_list>
using namespace std;
void Traverse(const deque<int> a)
{
	deque<int>::const_iterator it=a.cbegin();
	while(it!=a.cend())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}
void Traverse(const forward_list<int> b)
{
	forward_list<int>::const_iterator it=b.cbegin();
	while(it!=b.cend())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
	
}
void Traverse(const vector<int> b)
{
	vector<int>::const_iterator it=b.cbegin();
	while(it!=b.cend())
	{
		cout<<*it<<" ";
			it++;
	}
	cout<<endl;
}
void Init_link(deque<int> &a)
{
	for(int i=0;i<5;i++)
		a.push_front(i+1);
}
void Init_link(forward_list<int> &a)
{
	for(int i=0;i<5;i++)
		a.push_front(i+1);
}
void Init_link(vector<int> &a)
{
	for(int i=0;i<5;i++)
		a.push_back(i+1);
}
void Insert_link(deque<int> &a)
{
        deque<int>::iterator it=a.begin();
        it++;	
	a.insert(it,9);
}
void Insert_link(forward_list<int> &a)
{
        forward_list<int>::iterator it=a.begin();
	it++;
	a.insert_after(it,9);
}
void Delete_link(forward_list<int> &a)
{
        //  a.pop_front();
	forward_list<int>::iterator it=a.begin(),it1=a.end();
        a.clear();
}
void Delete_link(deque<int> &a)
{
	a.erase(a.begin(),a.end());
}
int main(void)
{
        deque<int> a;
        forward_list<int> b;
        vector<int> c;
	Init_link(a);
	//Insert_link(b);
      //  int &c=a.back(); c=0;
     //   Delete_link(a);
     //	Traverse(c);
      //  c.resize(3);
       // cout<<"size="<<c.size()<<endl;
    //	c.shrink_to_fit();
    //	cout<<"capacity="<<c.capacity()<<endl;
        c.assign(a.begin(),a.end());
	Traverse(c);
	return 0;
}

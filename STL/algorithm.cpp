#include<algorithm>
#include<numeric>
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
void Init(deque<int> &a)
{
	for(int i=0;i<5;i++)
		a.push_front(i+1);
}
void Find(const  deque<int> a)
{
                auto result=find(a.cbegin(),a.cend(),1);
		if(result==a.cend())
		{
		  cout<<"NO"<<endl;
	          return ;
		}
  	cout<<"result="<<*result<<endl;
}
void Sum(deque<int> &a)
{
	cout<<"sum"<<accumulate(a.begin(),a.end(),0)<<endl;
}
void Equal(deque<int> a,deque<int> b)
{
	cout<<equal(a.begin(),a.end(),b.begin())<<endl;
}
void Fill(deque<int> &a)
{
//	fill(a.begin(),a.end(),0);
 //       fill_n(a.begin(),5,1);
         fill_n(back_inserter(a),2,0);
}
void Copy(deque<int> &a,deque<int>&b)
{
        // copy(a.begin(),a.end(),b.begin());
      // copy(a.begin(),a.end(),front_inserter(b));
         copy(a.begin(),a.end(),back_inserter(b));
}

void Traverse(deque<int> a)
{
	deque<int>::iterator it=a.begin();
	while(it!=a.end())
	{
		cout<<*it<<" ";
		it++;
	}
}
void Replace(deque<int> &a)
{
	replace(a.begin(),a.end(),0,23);
}
void Replace_copy(deque<int> &a,deque<int> &b)
{
	replace_copy(a.begin(),a.end(),b.begin(),0,42);
}
void Sort(deque<int> &a)
{
	sort(a.begin(),a.end());
	auto end_unique=unique(a.begin(),a.end());
	a.erase(end_unique,a.end());
}
int main(void)
{
	deque<int> a;
	deque<int> b={7,8};
     //   Sort(a);       
   	// Init(b);
	Init(a);
       // Find(a);
       // Sum(a);
       // Equal(a,b);	
      //  b.resize(10);
//	Fill(a);
	Copy(a,b);
//	Replace(b);
  //      Replace_copy(a,b);
  	Traverse(b);	
	return 0;
}

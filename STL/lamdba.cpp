#include<iostream>
#include<algorithm>
#include<deque>
#include<functional>
using namespace std;
using namespace std::placeholders;
using std::placeholders::_1;
using std::placeholders::_2;
void Init(deque<int> &a)
{
	for(int i=0;i<5;i++)
		a.push_back(i+1);
          
}
void Travese(const deque<int> &a)
{
	for(const auto b:a)
		cout<<b<<" ";
	cout<<endl;
}
	
/*void Sort_unique(deque<int> &a,int c=4)
{
	sort(a.begin(),a.end());
	auto end_unique=unique(a.begin(),a.end());
	a.erase(end_unique,a.end());
  sort(a.begin(),a.end(),[c](const int a,const int b){return a<c;});
       // sort(a.begin(),a.end());
}*/
bool Isshort(const int &a,const int &b)
{
    return a>b;
}
void Sort(const deque<int> &a)
{
	sort(a.begin,a.end(),bind(Isshort,_2,_1));
       //sort(a.begin(),a.end(),Isshort);
}
			
int main(void)
{
	deque<int> a={6,3,1,4,2,4};
	//Sort_unique(a);
      //	Sort(a);
	
	Travese(a);
	return 0;
}

#include<iostream>
#include<array>
using namespace std;
void Init(array<int,5> &a)
{
	for(int i=0;i<5;i++)
	        a.at(i)=i+1;
}
void Travese(array<int,5> &a)
{
	array<int,5>::iterator it=a.begin();
	while(it!=a.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}
/*void Delete(array<int,5> &a)
{
	array<int,5>::iterator it=a.begin(),it1=a.end();
//	a.insert(it,9);
     
}*/

int main(void)
{
	array<int,5> a;
	array<int,5> b;
	Init(a);
//	swap(a,b);
      //  b.assign(a.begin()+1,a.end()); 
	Travese(b);
	return 0;
}

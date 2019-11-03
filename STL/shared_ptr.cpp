#include<iostream>
#include<memory>
using namespace std;

void  get_num(shared_ptr<int> ptr)
{
	//shared_ptr<string> a=make_shared<string>(4,'v');
	cout<<ptr.use_count()<<endl;
}
int main1(void)
{
	unique_ptr<string> b(new string[4]);
	//cout<<"count="<<b.use_count()<<endl;
       // int *a=new int(1024);
       // get_num(shared_ptr<int> (a));
       // unique_ptr<string> a(b.release());
       shared_ptr<int> p1=make_shared<int>(12);
       weak_ptr<int> p2=p1;
       p1.reset();
       if(!p2.lock())
       {
	       cout<<"空的"<<endl;
       }
	return 0;
}
int main(void)
{
	/*string a;
	shared_ptr<string> p1=make_shared<string>(5,'e');
        shared_ptr<string> p2(p1);
	p2=make_shared<string>(5,'c');
       	p1.reset(&a);
	cout<<"count="<<p1.use_count()<<endl;
	cout<<"string="<<a<<endl;
	*/
	allocator<string> a;
	auto p=a.allocate(10);
	auto q=p;
	a.construct(q++);
	a.construct(q++,10,'v');
	a.construct(q++,"hi");
	q--;
	cout<<*q<<endl;
	return 0;
}

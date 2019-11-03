#include<iostream>
using namespace std;
class clown
{
	private:
		int age;
		string name;
	public:
		 clown();
		 clown(int ,string);
                 clown(const clown &a):age(a.age),name(a.name){}
	         void  get();
		 void set(int a,string s);
		clown& operator=( clown &a);
};
void clown::set(int a,string s)
{
	age=a;
	name=s;
}
clown& clown:: operator=( clown &a)
{
	age=a.age;
	name=a.name;
	return *this;
}
void clown::get()
{
	cout<<"age="<<age<<endl;
	cout<<"name="<<name<<endl;
}
/*
clown:: clown(clown &a)
{
	age=a.age;
	name=a.name;

}
*/
clown::clown(int age,string name)
{
	this->age=age;
	this->name=name;
}
int main(void)
{
        clown a(12,"qwe");
	clown b(move(a));
//	a.set(13,"qwe");
//	clown b=a;
        b.get();
	return 0;
}
int main1(void)
{
	int a=10;
	int &&b=std::move(a);
	a++;
	cout<<"a="<<a<<endl;
	return 0;
}

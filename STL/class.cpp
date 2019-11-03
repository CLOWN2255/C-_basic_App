#include<iostream>
using namespace std;
class clown
{
	public:
		virtual  void  set_age(int)=0;
		virtual  void  set_name(string)=0;
	protected:
        int age;
        string name;
	public:
	virtual void get_name()=0;
	virtual void get_age()=0;
	protected:
};
class clown1:public clown
{
	public:
	void set_age(int a){age=a;}
	void set_name(string n){name=n;}
	void get_age(){cout<<"age="<<age<<endl;}
	void get_name(){cout<<"name="<<name<<endl;}
	private:
};
class clown2:public clown
{
	public:
	void set_age(int a){age=a;}
	void set_name(string n){name=n;}
	void get_age(){cout<<"age="<<age<<endl;}
	void get_name(){cout<<"name="<<name<<endl;}
};
void Set_age(clown *joker,int a)
{
	joker->set_age(a);
}
void Get_age(clown *joker)
{
	joker->get_age();
}
int main(void)
{
	clown *joker=new clown;
	clown *joker1=new clown1;
	clown *joker2=new clown2;
	Set_age(joker1,12);
	Set_age(joker2,13);
	Get_age(joker1);
	Get_age(joker2);
	return 0;
}
	
int main1(void)
{
	clown *joker1=new clown1;
	clown *joker2=new clown2;
/*	joker1->set_age(12);
	joker2->set_age(14);
	joker1->get_age();
	joker2->get_age();
*/
	return 0;
}

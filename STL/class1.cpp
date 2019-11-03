#include<iostream>
using namespace std;
class clown 
{
	public:
		virtual void set_name(string)=0;
	protected:
		string name="clown";
};
class clown1:protected clown
{
	public:
		void set_name(string a)override {name=a;}
         //	friend void get( clown *a){cout<<a->name<<endl;}
	        friend void print(clown1 *a){cout<<a->name<<endl;}	
	  friend void print(int s){cout<<s<<endl;}
};
void print(int);
void get(clown1 *a);
class clown2:public clown1
{
    public:
	    void get_name()
	    {
		    cout<<name<<endl;
	    }
};
int main(void)
{
	//clown *a=new clown1;
	clown1 a;
	print(1);
	//cout<<a.name<<endl;
	//a.get_name();
	return 0;
}

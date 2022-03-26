#include<iostream>
using namespace std;
//class
class Sa
{
  //Access specifier
	public:
  // Data Members
	int acno,balan;
	void dipl()
	{
		cout<<acno<<endl<<balan<<endl;
	}
};
main()
{
	Sa s1,s2;
	s1.acno=101;
	s1.balan=100000;
	s1.dipl();
	
	s2.acno=1000;
	s2.balan=1000;
	s2.dipl();
}

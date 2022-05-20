#include <iostream>
using namespace std;
int main()
{
	int n,o,e;
	cout<<" size of array="<<endl;
	cin>>n;
	int ar[n];
	cout<<" element of array="<<endl;
	for(o=0;o<n;o++)
	{
		cin>>ar[o];
	}
	e=ar[0];
	ar[0]=ar[n-1];
	ar[n-1]=e;
	cout<<"\n>>output<<";
	cout<<"\nArray after swapping first and last elements"<<endl;
	for(o=0; o<n; o++)
	{
		cout<<ar[o]<<endl;
	}
}

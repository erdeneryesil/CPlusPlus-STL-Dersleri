#include<iostream>
#include<tuple>
using namespace std;

int main(){

	tuple<int,char> t1(11,'X');

	tuple<int,float,char> t2;
	t2=make_tuple(22,33.44f,'Y');

	tuple<double,string,int,bool>t3=make_tuple(55.66,"Merhaba",77,true);

	cout<<tuple_size<decltype(t1)>::value<<endl;
	cout<<tuple_size<decltype(t2)>::value<<endl;
	cout<<tuple_size<decltype(t3)>::value<<endl;
		
	cout<<get<0>(t1)<<" "<<get<1>(t1)<<endl;
	cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<endl;
	cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3)<<endl;
	
	double x;
	string y;
	int z;
	bool t;

	tie(x,y,z,t)=t3;
	cout<<x<<" "<<y<<" "<<z<<" "<<t<<endl;	
	cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3)<<endl;
	
	tie(x,ignore,ignore,t)=t3;
	cout<<x<<" "<<y<<" "<<z<<" "<<t<<endl;
	
	auto t4=tuple_cat(t2,t3);
	cout<<tuple_size<decltype(t4)>::value<<endl;
	cout<<get<0>(t4)<<" ";
	cout<<get<1>(t4)<<" ";
	cout<<get<2>(t4)<<" ";
	cout<<get<3>(t4)<<" ";
	cout<<get<4>(t4)<<" ";
	cout<<get<5>(t4)<<" ";
	cout<<get<6>(t4)<<" "<<endl;
	
	tuple<double,string,int,bool>t4=make_tuple(88.99,"Selam",11,false);
	cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3)<<endl;
	cout<<get<0>(t4)<<" "<<get<1>(t4)<<" "<<get<2>(t4)<<" "<<get<3>(t4)<<endl;
	
	t4.swap(t3);
	cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<" "<<get<3>(t3)<<endl;
	cout<<get<0>(t4)<<" "<<get<1>(t4)<<" "<<get<2>(t4)<<" "<<get<3>(t4)<<endl;
	
	return 0;
}

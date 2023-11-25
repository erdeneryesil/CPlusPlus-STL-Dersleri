#include <iostream>
#include<ratio>

using namespace std;

int main(){

	typedef ratio<1,3> birBoluUc;
	typedef ratio<1,4> birBoluDort;
	typedef ratio<11,33> onbirBoluOtuzuc;
	
	//ratio_equal
	cout<<ratio_equal<birBoluUc,birBoluDort>::value<<endl;		// 1/3 == 1/4 ? false
	cout<<ratio_equal<birBoluUc,onbirBoluOtuzuc>::value<<endl;	// 1/3 == 11/33 ? true
	
	//ratio_not_equal
	cout<<ratio_not_equal<birBoluUc,birBoluDort>::value<<endl;	// 1/3 != 1/4 ? true
	cout<<ratio_not_equal<birBoluUc,onbirBoluOtuzuc>::value<<endl;	// 1/3 != 11/33 ? false
	
	//ratio_less
	cout<<ratio_less<birBoluUc,birBoluDort>::value<<endl;	// 1/3 < 1/4 ? false
	cout<<ratio_less<birBoluDort,birBoluUc>::value<<endl;	// 1/4 < 1/3 ? true
	
	//ratio_less_equal
	cout<<ratio_less_equal<birBoluUc,birBoluDort>::value<<endl;	// 1/3 <= 1/4 ? false
	cout<<ratio_less_equal<birBoluDort,birBoluUc>::value<<endl;	// 1/4 <= 1/3 ? true
	cout<<ratio_less_equal<birBoluUc,onbirBoluOtuzuc>::value<<endl;	// 1/3 <= 11/33 ? true
	
	//ratio_greater
	cout<<ratio_greater<birBoluUc,birBoluDort>::value<<endl;	// 1/3 > 1/4 ? true
	cout<<ratio_greater<birBoluDort,birBoluUc>::value<<endl;	// 1/4 > 1/3 ? false
	
	//ratio_greater_equal
	cout<<ratio_greater_equal<birBoluUc,birBoluDort>::value<<endl;	// 1/3 >= 1/4 ? true
	cout<<ratio_less_equal<birBoluUc,onbirBoluOtuzuc>::value<<endl;	// 1/3 >= 11/33 ? true
	cout<<ratio_greater_equal<birBoluDort,birBoluUc>::value<<endl;	// 1/4 >= 1/3 ? false
	
	return 0;
}

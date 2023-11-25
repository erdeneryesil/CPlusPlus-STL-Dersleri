#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'}};
	
	map<int,char>::iterator itr=m.begin();		//{1,'a'}
	itr++;			//işaret ettiği düğüm değiştirilebilir {2,'b'}
	(*itr).first=99;	//HATA! key değişmez	
	(*itr).second='w';	//value değişebilir {2,'w'}
	
	itr=m.end();
	itr--;			//işaret ettiği düğüm değiştirilebilir {4,'d'}
	(*itr).first=99;	//HATA! key değişmez	
	(*itr).second='w';	//value değişebilir {4,'w'}

	map<int,char>::reverse_iterator ritr=m.rbegin();	//{4,'d'}
	ritr++;			//işaret ettiği düğüm değiştirilebilir {3,'c'}
	(*ritr).first=99;	//HATA! key değişmez	
	(*ritr).second='w';	//value değişebilir {3,'w'}

	ritr=m.rend();
	ritr--;			//işaret ettiği düğüm değiştirilebilir {1,'a'}
	(*ritr).first=99;	//HATA! key değişmez	
	(*ritr).second='w';	//value değişebilir {1,'w'}

	map<int,char>::const_iterator citr=m.cbegin();	//{1,'a'}
	citr++;			//işaret ettiği düğüm değiştirilebilir {2,'b'}
	(*citr).first=99;	//HATA! key değişmez	
	(*citr).second='w';	//HATA! value değişmez

	citr=m.cend();
	citr--;			//işaret ettiği düğüm değiştirilebilir {4,'d'}
	(*citr).first=99;	//HATA! key değişmez	
	(*citr).second='w';	//HATA! value değişmez

	map<int,char>::const_reverse_iterator critr=m.crbegin();	//{4,'d'}
	critr++;		//işaret ettiği düğüm değiştirilebilir {3,'c'}	
	(*critr).first=99;	//HATA! key değişmez	
	(*critr).second='w';	//HATA! value değişmez		

	critr=m.crend();
	critr--;		//işaret ettiği düğüm değiştirilebilir {1,'a'}	
	(*critr).first=99;	//HATA! key değişmez	
	(*critr).second='w';	//HATA! value değişmez	

	return 0;
}

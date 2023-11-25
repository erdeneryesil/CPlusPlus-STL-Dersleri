#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{1,'b'},{2,'c'},{2,'d'}};
	
	//multimap<int,char>::iterator itr=m.begin();		//{1,'a'}
	//itr++;		//işaret ettiği düğüm değiştirilebilir {1,'b'}
	//(*itr).first=99;	//HATA! key değişmez	
	//(*itr).second='w';	//value değişebilir {1,'w'}
	
	//itr=m.end();
	//itr--;		//işaret ettiği düğüm değiştirilebilir {2,'d'}
	//(*itr).first=99;	//HATA! key değişmez	
	//(*itr).second='w';	//value değişebilir {2,'w'}
	
	//multimap<int,char>::reverse_iterator ritr=m.rbegin();	//{2,'d'}
	//ritr++;		//işaret ettiği düğüm değiştirilebilir {2,'c'}
	//(*ritr).first=99;	//HATA! key değişmez	
	//(*ritr).second='w';	//value değişebilir {2,'w'}
	
	//ritr=m.rend();
	//ritr--;		//işaret ettiği düğüm değiştirilebilir {1,'a'}
	//(*ritr).first=99;	//HATA! key değişmez	
	//(*ritr).second='w';	//value değişebilir {1,'w'}
	
	multimap<int,char>::const_iterator citr=m.cbegin();	//{1,'a'}	
	//citr++;		//işaret ettiği düğüm değiştirilebilir {1,'b'}
	//(*citr).first=99;	//HATA! key değişmez	
	//(*citr).second='w';	//HATA! value değişmez

	//citr=m.cend();
	//citr--;		//işaret ettiği düğüm değiştirilebilir {2,'d'}
	//(*citr).first=99;	//HATA! key değişmez	
	//(*citr).second='w';	//HATA! value değişmez

	multimap<int,char>::const_reverse_iterator critr=m.crbegin();	//{2,'d'}
	//critr++;		//işaret ettiği düğüm değiştirilebilir {2,'c'}	
	//(*critr).first=99;	//HATA! key değişmez	
	//(*critr).second='w';	//HATA! value değişmez		

	critr=m.crend();
	//critr--;		//işaret ettiği düğüm değiştirilebilir {1,'a'}	
	//(*critr).first=99;	//HATA! key değişmez	
	//(*critr).second='w';	//HATA! value değişmez	
	
	return 0;
}

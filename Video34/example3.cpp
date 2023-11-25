#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

template <typename itr>
void iteratorOzellikleri(itr i1, itr i2){

	using kategori=typename iterator_traits<itr>::iterator_category;
	using mesafeTuru=typename iterator_traits<itr>::difference_type;	
	using degerTuru=typename iterator_traits<itr>::value_type;		
	using isaretciTuru=typename iterator_traits<itr>::pointer;
	using referansTuru=typename iterator_traits<itr>::reference;
	
	cout<<"Iterator Kategorisi :";
	if(typeid(kategori)==typeid(input_iterator_tag))
		cout<<"giriş iteratörü"<<endl;
	else if(typeid(kategori)==typeid(output_iterator_tag))
		cout<<"çıkış iteratörü"<<endl;
	else if(typeid(kategori)==typeid(forward_iterator_tag))
		cout<<"ileri yönlü iteratör"<<endl;
	else if(typeid(kategori)==typeid(bidirectional_iterator_tag))
		cout<<"iki yönlü iteratör"<<endl;
	else if(typeid(kategori)==typeid(random_access_iterator_tag))
		cout<<"rasgele erişim iteratörü"<<endl;

	mesafeTuru mesafe=distance(i1,i2);
	cout<<"Begin-End Arası Mesafe :"<<mesafe<<endl;
	
	cout<<"Değer Türü :";
	if(typeid(degerTuru)==typeid(int))cout<<"integer"<<endl;
	else if(typeid(degerTuru)==typeid(double))cout<<"double"<<endl;
	else if(typeid(degerTuru)==typeid(string))cout<<"string"<<endl;

	cout<<"Pointer Türü: ";
	if(typeid(isaretciTuru)==typeid(int*))cout<<"int*"<<endl;
	if(typeid(isaretciTuru)==typeid(double*))cout<<"double*"<<endl;
	if(typeid(isaretciTuru)==typeid(string*))cout<<"string*"<<endl;

	cout<<"Reference Türü: ";
	if(typeid(referansTuru)==typeid(int&))cout<<"int&"<<endl;
	if(typeid(referansTuru)==typeid(double&))cout<<"double&"<<endl;
	if(typeid(referansTuru)==typeid(string&))cout<<"string&"<<endl;

	cout<<"-----------------------"<<endl;
}

int main(){

	list<int> l{11,22,33,44,55,66};
	list<int>::iterator li1=l.begin();
	list<int>::iterator li2=l.end();
	iteratorOzellikleri(li1,li2);

	vector<double> v{11.22,33.44,55.66};
	vector<double>::iterator vi1=v.begin();
	vector<double>::iterator vi2=v.end();
	iteratorOzellikleri(vi1,vi2);

	forward_list<string> fl{"Sinop","Samsun","Ankara","İstanbul"};
	forward_list<string>::iterator fli1=fl.begin();
	forward_list<string>::iterator fli2=fl.end();
	iteratorOzellikleri(fli1,fli2);

	return 0;
}

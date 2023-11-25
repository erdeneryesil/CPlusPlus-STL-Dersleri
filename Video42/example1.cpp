#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int main(){

	//uninitialized_copy

	pair<int*,ptrdiff_t>bellek=get_temporary_buffer<int>(5);
	//geçici bir bellek bloğu oluşturur. (5 adet int öğe saklanabilir)
	//int* (first) Bu bellek bölgesine yerleştirilecek ilk elemanı işaret eden pointer
	//ptrdiff_t (second) (son pointer-ilk pointer) Bu bellek bölgesine yerleştirilecek elemanların sayısı
	

	if(bellek.second>0){//bellek ayırma işlemi başarılı olmuş ve 0'dan fazla eleman saklayabilmek mümkünse

	vector<int> v{11,22,33,44,55};
	auto itr=uninitialized_copy(v.begin(),v.end(),bellek.first);
	//get_temporary_buffer ile oluşturulan geçici bellek bölgesine v'nin elemanlarını kopyalar,
	//ayrılan belleğin bittiği adresi döndürür
	// Bizim örneğimiz için: 
	//	bellek.first, 11 elemanını işaret edecek pointer
	//	bellek.second, 5 
	//	itr, aralığın bitiş adresi
	cout<<"son eleman 	: "<<*(--itr)<<endl;
	}
	
	cout<<"bellek 		: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	//#include<execution>
	//auto sonElemanItr=uninitialized_copy(execution::par,v.begin(),v.end(),bellek.first);
    
	return 0;
}

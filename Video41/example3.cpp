#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    	//lexicographical_compare_three_way c++20
    
    	//strong_ordering::less 
    	//strong_ordering::greater 
    	//strong_ordering::equal
    
	string s1{"abc"};
    	string s2{"def"};
    	string s3{"abc"};

    	strong_ordering sonuc=lexicographical_compare_three_way(s1.begin(),s1.end(),s2.begin(),s2.end());//strong_ordering::less 
    	//auto sonuc=lexicographical_compare_three_way(s2.begin(),s2.end(),s1.begin(),s1.end());//strong_ordering::greater 
    	//auto sonuc=lexicographical_compare_three_way(s1.begin(),s1.end(),s3.begin(),s3.end());//strong_ordering::equal
    
   	if(sonuc==strong_ordering::greater){
        	cout<<"ilk string, ikincisinden büyük"<<endl;
   	}else if(sonuc==strong_ordering::less){
        	cout<<"ilk string, ikincisinden küçük"<<endl;
   	}else if(sonuc==strong_ordering::equal){
        	cout<<"iki string eşit"<<endl;
   	}
        
	return 0;
}

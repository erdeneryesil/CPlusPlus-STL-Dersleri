#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//lexicographical_compare

	string s1{"abc"};
    	string s2{"def"};

    	string s3{"AAA"};       //A, ascii kodu 65
    	string s4{"aaa"};       //a, ascii kodu 97

    	string s5{"abcD"};
    	string s6{"abcd"};

    	bool sonuc;

   	sonuc=lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end());
    	cout<<sonuc<<endl; //"abc"<"def"   true   (varsayılan kıyaslama <)

    	sonuc=lexicographical_compare(s3.begin(),s3.end(),s4.begin(),s4.end());
    	cout<<sonuc<<endl; //"AAA"<"aaa"   true  (varsayılan kıyaslama <)

    	sonuc=lexicographical_compare(s5.begin(),s5.end(),s6.begin(),s6.end());
    	cout<<sonuc<<endl; //"abcD"<"abcd"   true  (varsayılan kıyaslama <)

    	auto buyukMu=[](char x,char y){return x>y;};

     	sonuc=lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end(),buyukMu);
    	cout<<sonuc<<endl; //"abc">"def"   false   (kıyaslama >)
    
     	sonuc=lexicographical_compare(s3.begin(),s3.end(),s4.begin(),s4.end(),buyukMu);
    	cout<<sonuc<<endl; //"AAA">"aaa"   false  (kıyaslama >)

    	sonuc=lexicographical_compare(s5.begin(),s5.end(),s6.begin(),s6.end(),buyukMu);
    	cout<<sonuc<<endl; //"abcD">"abcd"   false  (kıyaslama >)

	//#include<execution>
	//lexicographical_compare(execution::par,s5.begin(),s5.end(),s6.begin(),s6.end(),buyukMu)

	return 0;
}

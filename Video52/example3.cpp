#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	
  	string metin ("Merhaba düzenli ifadeler. 0 531 987 65 43 ahmet57@website.com.tr 05/08/2005 Bu yemek çok tuzsuz. 22 Mart 2001 Sokakta kartopu oynadık. 127.0.0.10 Bugün hava güneşli. 0542 876 54 32 Göçebeler buraya kurarmış çadırlarını. crazyboy.55@search.net Hava soğursa paltonu giy. 2/11/1997 Görüyorum ki ders çalışıyorsun. 01 Nisan 1999 Arkadaşına güzel bir mektup yazdı. 255.255.255.255 Evde birbirinden güzel birçok tablo vardı. 11 Temmuz 1997 0535 1234567 Bu ağacın altında oyunlar oynardık. ogrenci789@universite.edu.tr 21 Haziran 2000 Dün akşam bizim sokak çok ıssızdı. 03/02/1954 Gün boyu salıncakta sallandı. 127.0.0.1 555 123 45 67 aliveli@hotmail.com Yarın önemli bir sınavı varmış. 01/11/2020 Kaçacak delik aradık. 192.168.1.1 Çalılara kaçan top patlamış.30 Ocak 2005 544 234 56 78 Çocuklar okulun bahçesindeydi. deneme_@gmail.com Buraya nasıl geldiniz? 22/10/2020 Küçükken çok yaramaz bir çocukmuş. 1.0.0.0 Kardeşim uyandı. 505 3456789 ayse@asdf.co.uk 9/5/2020 Bu sabah çok erken kalktım. 2 Ocak 1995 Sizi arayan bendim. oya_87@ghjk.de 0.0.0.0 Eyvah, yemek yandı!");
  	
  	smatch eslesme;
  	
  	//deneme@abc.com
	//deneme@abc.com.tr
	//deneme123@abc.net
	//deneme_123@abc.org
	//deneme.123@abc.co.uk
  	regex reg("(?:\\w|\\.)+"//deneme123,deneme_123,deneme.123
  		  "@"		//@
  		  "\\w+"	//abc
  		  "\\.\\w+"	//.com, .net, .org, .co vs.
  		  "(?:\\.\\w+)?");//.tr,.uk vs.
  	
  	
  	/*regex reg("(?:[[:w:]]|\\.)+"//deneme123,deneme_123,deneme.123
  		  "@"		//@
  		  "[[:w:]]+"	//abc
  		  "\\.[[:w:]]+"	//.com, .net, .org, .co vs.
  		  "(?:\\.[[:w:]]+)?");//.tr,.uk vs.
  	*/	  
	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<"\n";
   		metin = eslesme.suffix().str();
	}
	
  	return 0;
}

#include <iostream>
#include <regex>

using namespace std;

int main ()
{
  	string metin ("Merhaba düzenli ifadeler. 0 531 987 65 43 deneme@abc.com.tr 05/08/2005 Bu yemek çok tuzsuz. 25 Mart 2001 Pazar Sokakta kartopu oynadık. 127.0.0.10 Bugün hava güneşli. 0542 876 54 32 Göçebeler buraya kurarmış çadırlarını. deneme123@def.net Hava soğursa paltonu giy. 2/11/1997 Görüyorum ki ders çalışıyorsun. 02 Nisan 1999 Cuma Arkadaşına güzel bir mektup yazdı. 255.255.255.255 Evde birbirinden güzel birçok tablo vardı. 12 Temmuz 1997 Cumartesi 0535 1234567 Bu ağacın altında oyunlar oynardık. deneme.123@jkl.edu 23 Haziran 2000 Cuma Dün akşam bizim sokak çok ıssızdı. 03/02/1954 Gün boyu salıncakta sallandı. 127.0.0.1 555 123 45 67 aliveli@hotmail.com Yarın önemli bir sınavı varmış. 01/11/2020 Kaçacak delik aradık. 192.168.1.1 Çalılara kaçan top patlamış.30 Ocak 2005 Pazar 544 234 56 78 Çocuklar okulun bahçesindeydi. deneme_@gmail.com Buraya nasıl geldiniz? 22/10/2020 Küçükken çok yaramaz bir çocukmuş. 1.0.0.0 Kardeşim uyandı. 15 Ekim 2004 Cuma 505 3456789 ayse@asdf.co.uk 9/5/2020 Bu sabah çok erken kalktım. 2 Ocak 1995 Pazartesi Sizi arayan bendim. 0.0.0.0 Eyvah, yemek yandı!");
  	
  	smatch eslesme;
  	
  	//ayın kaçı(boşluk) ay ismi(boşluk) yıl(boşluk) gün ismi
  	regex reg("\\d{1,2}\\s"//ayın kaçı(boşluk)
  		"[A-Z][a-z]+\\s"//(baş harf büyük)ay ismi (boşluk)
  		"\\d{4}\\s"	//yıl(boşluk)
  		"[A-Z][a-z]+");	//(baş harf büyük)gün ismi
  		
  	 /* regex reg("[[:d:]]{1,2}[[:s:]]"//ayın kaçı(boşluk)
  		"[[:upper:]][[:lower:]]+[[:s:]]"//(baş harf büyük)ay ismi (boşluk)
  		"[[:d:]]{4}[[:s:]]"	//yıl(boşluk)
  		"[[:upper:]][[:lower:]]+");	//(baş harf büyük)gün ismi
  	*/
	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<"\n";
   		metin = eslesme.suffix().str();
	}
	
  	return 0;
}

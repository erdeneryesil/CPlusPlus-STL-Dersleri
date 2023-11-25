#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	
  	string metin ("Merhaba düzenli ifadeler. 0 531 987 65 43 deneme@abc.com.tr 05/08/2005 Bu yemek çok tuzsuz. 22 Mart 2001 Sokakta kartopu oynadık. 127.0.0.10 Bugün hava güneşli. 0542 876 54 32 Göçebeler buraya kurarmış çadırlarını. deneme123@def.net Hava soğursa paltonu giy. 2-11-97 Görüyorum ki ders çalışıyorsun. 01 Nisan 1999 Arkadaşına güzel bir mektup yazdı. 255.255.255.255 Evde birbirinden güzel birçok tablo vardı. 11 Temmuz 1997 0535 1234567 Bu ağacın altında oyunlar oynardık. deneme.123@jkl.edu 21 Haziran 2000 Dün akşam bizim sokak çok ıssızdı. 3/2/99 Gün boyu salıncakta sallandı. 127.0.0.1 555 123 45 67 aliveli@hotmail.com Yarın önemli bir sınavı varmış. 01/11/2020 Kaçacak delik aradık. 192.168.1.1 Çalılara kaçan top patlamış.30 Ocak 2005 544 234 56 78 Çocuklar okulun bahçesindeydi. deneme_@gmail.com Buraya nasıl geldiniz? 22-10-2015 Küçükken çok yaramaz bir çocukmuş. 1.0.0.0 Kardeşim uyandı. 505 3456789 ayse@asdf.co.uk 9/5/2020 Bu sabah çok erken kalktım. 2 Ocak 1995 Sizi arayan bendim. 0.0.0.0 Eyvah, yemek yandı! 03-5-1997");
  	
  	smatch eslesme;
  	
  	//	gün/ay/yıl veya gün-ay-yıl
  	regex reg("\\d{1,2}(?:\\/|-)\\d{1,2}(?:\\/|-)\\d{2,4}");
  	//regex reg("[[:d:]]{1,2}(?:\\/|-)[[:d:]]{1,2}(?:\\/|-)[[:d:]]{2,4}");
  	
	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<"\n";
   		metin = eslesme.suffix().str();
	}
	
  	return 0;
}

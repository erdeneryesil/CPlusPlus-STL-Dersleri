#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	
  	string metin ("Merhaba düzenli ifadeler. 0 531 987 65 43 deneme@abc.com.tr 05/08/2005 Bu yemek çok tuzsuz. 22 Mart 2001 Sokakta kartopu oynadık. 127.0.0.10 Bugün hava güneşli. 0542 876 54 32 Göçebeler buraya kurarmış çadırlarını. deneme123@def.net Hava soğursa paltonu giy. 2/11/1997 Görüyorum ki ders çalışıyorsun. 01 Nisan 1999 Arkadaşına güzel bir mektup yazdı. 255.255.255.255 Evde birbirinden güzel birçok tablo vardı. 11 Temmuz 1997 0535 1234567 Bu ağacın altında oyunlar oynardık. 05556543210 deneme.123@jkl.edu 21 Haziran 2000 Dün akşam bizim sokak çok ıssızdı. 03/02/1954 Gün boyu salıncakta sallandı. 127.0.0.1 555 123 45 67 aliveli@hotmail.com Yarın önemli bir sınavı varmış. 01/11/2020 Kaçacak delik aradık. 192.168.1.1 Çalılara kaçan top patlamış.30 Ocak 2005 544 234 56 78 Çocuklar okulun bahçesindeydi. deneme_@gmail.com Buraya nasıl geldiniz? 22/10/2020 Küçükken çok yaramaz bir çocukmuş. 1.0.0.0 Kardeşim uyandı. 505 3456789 ayse@asdf.co.uk 9/5/2020 Bu sabah çok erken kalktım. 2 Ocak 1995 Sizi arayan bendim. 0.0.0.0 Eyvah, yemek yandı!");
  	
  	smatch eslesme;
  	//0 530 123 45 67
	//0530 123 45 67
	//0530 1234567
	//05301234567
	//530 123 45 67
	//530 123 45 67
	//530 1234567

  	regex reg("(?:0\\s?)?"	//0(boşluk), 0,-(0 ve boşluk hiçbirisi yok)
  		"\\d{3}\\s?"	//530(boşluk),530
  		"\\d{3}\\s?"	//123(boşluk), 123
  		"\\d{2}\\s?"	//45(boşluk),45
  		"\\d{2}");	//67
  	
  		
  	/*regex reg("(?:0[[:s:]]?)?"	//0(boşluk), 0,-(0 ve boşluk hiçbirisi yok)
  			"[[:d:]]{3}[[:s:]]?"//530(boşluk),530
  			"[[:d:]]{3}[[:s:]]?"//123(boşluk), 123
  			"[[:d:]]{2}[[:s:]]?"//45(boşluk),45
  			"[[:d:]]{2}");		//67
  	*/
	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<"\n";
   		metin = eslesme.suffix().str();
	}
	
  	return 0;
}

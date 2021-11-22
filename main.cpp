#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <algorithm>

// Veidoja Raivo Nikolajenko
// Zinu, ka te ir ļoti messy kods utt, bet galvenais ,ka viss strādā!
// Atvainojos par piekto uzdevumu ,ļoti notrigerojos, bet kaut kā izpildiju

int main() {
  std::cout << "****************************************" << std::endl << std::endl;
  std::cout << "Sveicināts mazajā projektā! \n";
  std::cout << "Izvēlies uzdevumu un izpildi to pareizi!" << std::endl << std::endl;
  std::cout << "Lai veicas!" << std::endl << std::endl;
  std::cout << "****************************************" << std::endl;
  std::cout << "****************************************" <<std::endl << std::endl;
char quit;
  do{
  int uzdevums = 0;

  char alfabets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Kad esi gatavs ievadi kādu no zemāk redzamajiem cipariem!" << std::endl;
  std::cout << "1 - Alfabēts" << std::endl;
  std::cout << "2 - Alfabēta burts" << std::endl;
  std::cout << "3 - Mīklu minēšana" << std::endl;
  std::cout << "4 - Vienkāršā matemātika" << std::endl;
  std::cout << "5 - Jautājumi par Latviju" << std::endl << std::endl;
  std::cout << "****************************************" << std::endl;

  while (uzdevums == 0 || uzdevums > 5) {
    std::cin >> uzdevums;
      //////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////Pirmais Uzdevums///////////////////////////////////////
      //////////////////////////////////////////////////////////////////////////////////////////////
      if (uzdevums == 1) {
        char atbilde1[26];
        std::cout << "****************************************" << std::endl << std::endl;
        std::cout << "Sveicināts alfabēta uzdevumā! \n";
        std::cout << "Gatavojies uzrakstīt visu angļu alfabētu pareizā secībā!" << std::endl << std::endl;
        std::cout << "Jāraksta ar LIELAJIEM burtiem!" << std::endl << std::endl;
        std::cout << "****************************************" << std::endl << std::endl;
        std::cin >> atbilde1;
        std::cin.sync();
        if (atbilde1[25] == alfabets[25]){
          std::cout << "Pareizi";
        }
        else{
          std::cout << "Nepareizi, Pareizi būtu :"<<  alfabets << std::endl;
        }
      }
      //////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////Otrais Uzdevums////////////////////////////////////////
      //////////////////////////////////////////////////////////////////////////////////////////////
      else if (uzdevums == 2) {
        srand (time(NULL));
        int RandElement = rand() %26;
        int atbilde2;
        std::cout << "Kurš pēc kārtas angļu alfabētā ir burts |"<< alfabets[RandElement] << "| Ievadi skaitli no 1-27" << std::endl;
          std::cin >> atbilde2;
          if (atbilde2 == RandElement + 1){
            std::cout << "Pareizi";
            
          }
          else{
            std::cout << "Nepareizi, Pareizi būtu :" << RandElement + 1 << std::endl;
          }
      }
      //////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////Trešais Uzdevums///////////////////////////////////////
      //////////////////////////////////////////////////////////////////////////////////////////////
      else if ( uzdevums == 3) {
        std::cout << "****************************************" << std::endl << std::endl;
        std::cout << "Sveicināts mīklu uzdevumā! \n";
        std::cout << "Gatavojies minēt mīklas!" << std::endl;
        std::cout << "Ievadi pareizo skaitli!" << std::endl;
        std::cout << "****************************************" << std::endl << std::endl;
        srand (time(NULL));
        int randmikla = rand() %10;
        int atbilde3;

        char miklas[10][100] = {"Zils kažociņš visu pasauli apņēmis.","Kam ir galva, bet smadzeņu nav?","Balts kaķis pa logu lien iekšā.","Kas paliek garāks, kad paņem, pārvelk pār krūtīm un ieliek atbilstošā caurumā?","Bez rokām un kājām, bet zīmēt prot. ","Nav jūra, nav zeme, tur kuģi nepeld un staigāt nedrīkst.","Kam līdzīga apelsīna pusīte?","Kad melnam kaķim vislabāk ienākt mājā?","Bija balta un sirma, atnāca zaļš un jauns?","Ko met, kad to vajag, bet kad nevajag, paceļ?"};
        char atbildes[10][50] = {"Debesis","Sīpols","Saules_stari","Drošības_josta","Sāls","Purvs","Otrai_pusītei","Kad_durvis_vaļā","Pavasaris","Enkurs"};
        std::cout <<  miklas[randmikla] << std::endl;
        if (randmikla == 0){
          std::cout << "1.Mētelis" << std::endl;
          std::cout << "2.Debesis" << std::endl;
          std::cout << "3.Jūra" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 2){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 2";
          }
        }
        else if (randmikla == 1){
          std::cout << "1.Sīpolam" << std::endl;
          std::cout << "2.Atslēgai" << std::endl;
          std::cout << "3.Valstij" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 1){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 1";
          }
        }
        else if (randmikla == 2){
          std::cout << "1.Migla" << std::endl;
          std::cout << "2.Saules Stari" << std::endl;
          std::cout << "3.Aukstums" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 2){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 2";
          }
        }
        else if (randmikla == 3){
          std::cout << "1.Drošības josta" << std::endl;
          std::cout << "2.Metramērs" << std::endl;
          std::cout << "3.Kakls" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 1){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 1";
          }
        }
        else if (randmikla == 4){
          std::cout << "1.Mākslinieks" << std::endl;
          std::cout << "2.Lidmašīna" << std::endl;
          std::cout << "3.Sāls" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 3){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 3";
          }
        }
        else if (randmikla == 5){
          std::cout << "1.Upe" << std::endl;
          std::cout << "2.Purvs" << std::endl;
          std::cout << "3.Brauktuve" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 2){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 2";
          }
        }
        else if (randmikla == 6){
          std::cout << "1.Pēcpusei" << std::endl;
          std::cout << "2.Otrai pusītei" << std::endl;
          std::cout << "3.Mandarīnam" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 2){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 2";
          }
        }
        else if (randmikla == 7){
          std::cout << "1.Tumsā" << std::endl;
          std::cout << "2.Kad saimnieks mājās" << std::endl;
          std::cout << "3.Kad durvis vaļā" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 3){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 3";
          }
        }
        else if (randmikla == 8){
          std::cout << "1.Pavasaris" << std::endl;
          std::cout << "2.Sēkla" << std::endl;
          std::cout << "3.Zāle" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 1){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 1";
          }
        }
        else if (randmikla == 9){
          std::cout << "1.Sniega piku" << std::endl;
          std::cout << "2.Telefonu" << std::endl;
          std::cout << "3.Enkuru" << std::endl;
          std::cin >> atbilde3;
          if (atbilde3 == 3){
            std::cout << "Pareizi";
          }
          else{
            std::cout << "Nepareizi, pareizi būtu 3";
          }
        }
      }
      ////////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////Ceturtais Uzdevums///////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////
      else if ( uzdevums == 4) {
        //Mainīgie
        int sk;
        int sk2;
        int darbs;
        int atbilde4;
        char zime;
        int expected;
        const int MIN_VALUE = 1;
        const int MAX_VALUE = 20;
        //Random
        srand (time(NULL));
        //Skaitļu, zīmes iegūšana
        sk = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        sk2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        //Case
        switch(rand() % 3) {
            case 0:  zime = '*'; expected = sk * sk2; break;
            case 1:  zime = '+'; expected = sk + sk2; break;
            default: zime = '-'; expected = sk - sk2; break;
        }
        std::cout << "****************************************" << std::endl << std::endl;
        std::cout << "Sveicināts vienkāršās matemātikas uzdevumā! \n";
        std::cout << "Gatavojies saskaitīt, atņemt un reizināt!" << std::endl << std::endl;
        std::cout << "****************************************" << std::endl << std::endl;
        std::cout << sk << zime << sk2 << "=";
        std::cin >> atbilde4;
        if (atbilde4 == expected){
          std::cout << "PAREIZI";
        }
        else{
          std::cout << "NEPAREIZI, pareizi būtu " << expected;
        }
      }
      ////////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////Piektais Uzdevums///////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////
      else if (uzdevums == 5) {
        std::cout << "****************************************" << std::endl << std::endl;
        std::cout << "Sveicināts uzdevumā jautājumi par Latviju! \n";
        std::cout << "Gatavojies ievadīt atbildi uz uzdoto jautājumu!" << std::endl;
        std::cout << "Uzdevumā ir iespējams iegūt 15 punktus" << std::endl;
        std::cout << "Par pareizu atbildi +1 punkts" << std::endl;
        std::cout << "Par nepareizu atbildi -1 punkts" << std::endl << std::endl;
        std::cout << "****************************************" << std::endl << std::endl;
        int atbildeuzjaut;
        int atbildeuzjaut1;
        int atbildeuzjaut2;
        int atbildeuzjaut3;
        int atbildeuzjaut4;
        int atbildeuzjaut5;
        int atbildeuzjaut6;
        int atbildeuzjaut7;
        int atbildeuzjaut8;
        int atbildeuzjaut9;
        int atbildeuzjaut10;
        int atbildeuzjaut11;
        int atbildeuzjaut12;
        int atbildeuzjaut13;
        int atbildeuzjaut14;
        int punkti;
        //Jautājumi
        std::cout << "Kurš ir Latvijas valsts prezidents?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Egils Levits" << std::endl;
        std::cout << "2. Krišjānis Barons" << std::endl;
        std::cout << "3. Nils Ušakovs" << std::endl;
        std::cin >> atbildeuzjaut;
        if (atbildeuzjaut == 1){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Cik Latvijā ir APTUVENI iedzīvotāju?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. 10Miljoni" << std::endl;
        std::cout << "2. 600 tūkstoši" << std::endl;
        std::cout << "3. 1.9 miljoni" << std::endl;
        std::cin >> atbildeuzjaut1;
        if (atbildeuzjaut1 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kura ir Latvijas galvaspilsēta?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Rīga" << std::endl;
        std::cout << "2. Maskava" << std::endl;
        std::cout << "3. Ķengarags" << std::endl;
        std::cin >> atbildeuzjaut2;
        if (atbildeuzjaut2 == 1){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kura ir otrā lielākā pilsēta Latvijā?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Rīga" << std::endl;
        std::cout << "2. Daugavpils" << std::endl;
        std::cout << "3. Ventspils" << std::endl;
        std::cin >> atbildeuzjaut3;
        if (atbildeuzjaut3 == 2){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Cik APTUVENI liela platība ir Latvijai?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. 1600 Km2" << std::endl;
        std::cout << "2. 75000 L" << std::endl;
        std::cout << "3. 64000 m2" << std::endl;
        std::cin >> atbildeuzjaut4;
        if (atbildeuzjaut4 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurš ir ielākais ezers Latvijā?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Lubāns" << std::endl;
        std::cout << "2. Baltijas Ezers" << std::endl;
        std::cout << "3. Baikāls" << std::endl;
        std::cin >> atbildeuzjaut5;
        if (atbildeuzjaut5 == 1){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurš ir dziļākais ezers Latvijā?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Drīdzis" << std::endl;
        std::cout << "2. Melnais Ezers" << std::endl;
        std::cout << "3. Rīgas Jūras Ezers" << std::endl;
        std::cin >> atbildeuzjaut6;
        if (atbildeuzjaut6 == 1){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurš ir lielākais purvs Latvijā?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Netīrelis" << std::endl;
        std::cout << "2. Salu purvs" << std::endl;
        std::cout << "3. Gaujas purvs" << std::endl;
        std::cin >> atbildeuzjaut7;
        if (atbildeuzjaut7 == 2){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kura ir Latvijas vecākā pilsēta??" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Rīga" << std::endl;
        std::cout << "2. Ape" << std::endl;
        std::cout << "3. Ludza" << std::endl;
        std::cin >> atbildeuzjaut8;
        if (atbildeuzjaut8 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurā pilsētā ir lielākais udenskritums Eiropā?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Kuldīgā" << std::endl;
        std::cout << "2. Aizputē" << std::endl;
        std::cout << "3. Kolkā" << std::endl;
        std::cin >> atbildeuzjaut9;
        if (atbildeuzjaut9 == 1){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kura ir Latvijas garākā upe?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Lielupe" << std::endl;
        std::cout << "2. Smirdupīte" << std::endl;
        std::cout << "3. Gauja" << std::endl;
        std::cin >> atbildeuzjaut10;
        if (atbildeuzjaut10 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kura ir Latvijas lielākā upe?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Lielupe" << std::endl;
        std::cout << "2. Daugava" << std::endl;
        std::cout << "3. Mūsa" << std::endl;
        std::cin >> atbildeuzjaut11;
        if (atbildeuzjaut11 == 2){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kāda jūra ir pie Latvijas robežas?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Melnā Jūra" << std::endl;
        std::cout << "2. Karību Jūra" << std::endl;
        std::cout << "3. Baltijas Jūra" << std::endl;
        std::cin >> atbildeuzjaut12;
        if (atbildeuzjaut12 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurā novembrī ir Latvijas dzimšanas diena?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. 29. Novembrī" << std::endl;
        std::cout << "2. 2.Oktobrī" << std::endl;
        std::cout << "3. 18. Novembrī" << std::endl;
        std::cin >> atbildeuzjaut13;
        if (atbildeuzjaut13 == 3){
          punkti += 1;
        }
        std::cout << std::endl;
        std::cout << "Kurš ir augstākais paugurs Latvija?" << std::endl;
        std::cout << "Atbildē ievadi tikai skaitli, piemēram, 1" << std::endl << std::endl;
        std::cout << "1. Gaiziņkalns" << std::endl;
        std::cout << "2. Lielais Liepu kalns" << std::endl;
        std::cout << "3. Sauleskalns" << std::endl;
        std::cin >> atbildeuzjaut14;
        if (atbildeuzjaut14 == 1){
          punkti +=1;
        }
        std::cout << std::endl;
        std::cout << "Izpildot 5 uzdevumu kopā ieguvi :" << punkti << "/15 punktiem";
        punkti = 0;
      }
      else{
        std::cout << "Nederīgs uzdevums, ievadi velreiz" << std::endl;
        uzdevums = 0;
      }
    }
  }
while(quit != 'q' );
}

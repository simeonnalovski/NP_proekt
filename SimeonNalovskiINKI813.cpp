// Simeon Nalovski INKI 813
// zadaca 49, covid bilans preku mapa i vector
#include<fstream>
#include<ostream>
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm> // biblioteka za sortiranje na 

using namespace std;

// bulova funkcija za sortiranje po vrednost
bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    char quit; // za prekin na 
    string g1,g2,g3,g4,g5,g6,g7,g8,g9,g10; // stringovi za ime na grad
    int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10; // cel broj za broj na zaboleni
    //od red 22 pocnuva vnes na gradovi preku konzola
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g1>>b1; cout<<endl;
    cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q') // if ciklus za proverka dali korisnikot saka da vnesi grad so broj na zaboleni 0 
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g2; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g3; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g4; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g5; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g6; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b2=0; b3=0;b4=0;b5=0;b6=0;b7=0;b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g2>>b2; cout<<endl;
    cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g3; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g4; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g5; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g6; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b3=0;b4=0;b5=0;b6=0;b7=0;b8=0;b9=0;b10=0;
        goto MAPA; // bezusloven skok do linija 94, od kade pocnuva kreiranjeto i sortiranjeto na mapata
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g3>>b3; cout<<endl;
 cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g4; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g5; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g6; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
       b4=0;b5=0;b6=0;b7=0;b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat:"; cin>>g4>>b4; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g5; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g6; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b5=0;b6=0;b7=0;b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g5>>b5; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g6; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b6=0;b7=0;b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g6>>b6; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g7; cout<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
       b7=0;b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g7>>b7; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;      
        cout<<"Vnesi grad: "; cin>>g8; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
       b8=0;b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g8>>b8; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g9; cout<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b9=0;b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g9>>b9; cout<<endl;
     cout<<"Vnesi q za prekin na vnes na broj na zaboleni (0 e broj na zaboleni)";cin>>quit;
    if(quit=='q')
    {
        cout<<"Od sega site gradovi imaat po 0 zaboleni"<<endl;
        cout<<"Vnesi grad: "; cin>>g10; cout<<endl;
        b10=0;
        goto MAPA;
    }
    cout<<"Vnesi grad i broj na zaboleni koi sakas da se ispecatat: "; cin>>g10>>b10; cout<<endl;
  // kreiranje na mapa
  MAPA:// label za pocetok na kreiranje na mapa i krajna destinacija na bezusloven skok
	map<string, int> covid0530 = {
		{g1,b1},{g2,b2},{g3,b3},{g4,b4},{g5,b5},
        {g6,b6},{g7,b7},{g8,b8},{g9,b9},{g10,b10}
	};
  cout<<"Popolneta mapa: "<<endl;
 for (auto i : covid0530) // prvicno pecatenje po kluc
		std::cout  << i.first << " "
				<< i.second << "\n";
	// prazen vector od parovi
	vector<pair<string, int>> vec;

	// kopiranje na klucevi i vrednost od mapa vo vektor
  map<string, int> :: iterator it2;
  for (it2=covid0530.begin(); it2!=covid0530.end(); it2++)
  {
    vec.push_back(make_pair(it2->first, it2->second));
  }

	//sortiranje po golemina na broj na zaboleni (od najmal kon najgolem)
  sort(vec.begin(), vec.end(), sortByVal);

	// pecatenje na vectorot
	cout << "Mapata sortirana po vrednosti: " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << ": " << vec[i].second << endl;
	}
    string ime; string prezime; string datum_na_raganje; string broj_indeks;

cout<<"Vnesi ime i prezime  ";cin>>ime>>prezime;cout<<endl;
cout<<"Vnesi cifri na broj na indeks: ";cin>>broj_indeks;
cout<<"Vnesi datum na raganje: ";cin>>datum_na_raganje;

ofstream file; // kreiranje na ofstream file za zapisuvanje na podatoci
 file.open(ime+prezime+"INKI"+broj_indeks+".txt");
 file<<"Kovid bilans za den 30.05 po broj na zaboleni"<<endl;

for (int i = 0; i < vec.size(); i++)
	{
		file << vec[i].first << ": " << vec[i].second << endl;
	}
   file<<'INKI'<<broj_indeks<<endl; 
  file<<ime<<datum_na_raganje<<endl;  
file.close();
	    return 0;
}
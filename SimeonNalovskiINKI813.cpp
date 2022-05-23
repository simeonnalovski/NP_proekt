// Simeon Nalovski INKI 813
// zadaca 49, covid bilans preku mapa i vector
#include<fstream>
#include<ostream>
#include <iostream>
#include <map>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
    
	map<string, int> covid2005_2205 = {
		{"Skopje",95},{"Bitola",18},{"Prilep",3},{"Stip",5},{"Debar",1},
        {"Kumanovo",5},{"Ohrid",8},{"Delcevo",2},//{"Tetovo",3},{"Sveti Nikole",1}
	};//mapa so inicializirani vrednosti
    //ako se isprisat dvete kosi crti levo od Tetovo, mapata ke gi sodrzi Tetovo i Sveti Nikole, bez dopolnuvanje so gradovi so 0 zaboleni
int golemina = covid2005_2205.size(); // golemina na mapa, za vo slucaj da treba da se dopolnat gradovi so broj na zaboleni 0
if(golemina == 9) // if ciklus, za vo slucaj na dopolnuvanje
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0)); // dopolnuvanje spored par na kluc i vrednost
    goto POPOLNUVANJE; // bezusloven skok do labela za popolnuvanje (linija 87)
}
if(golemina == 8)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    goto POPOLNUVANJE;
}
if(golemina == 7)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Veles",0));
    goto POPOLNUVANJE;
}
if(golemina == 6)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
    goto POPOLNUVANJE;
}
if(golemina == 5)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
       covid2005_2205.insert(pair<string,int>("Vinica",0));
    goto POPOLNUVANJE;
}
if(golemina == 4)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
       covid2005_2205.insert(pair<string,int>("Vinica",0));
    covid2005_2205.insert(pair<string,int>("Makedonska Kamenica",0));

}
if(golemina == 3)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
       covid2005_2205.insert(pair<string,int>("Vinica",0));
    covid2005_2205.insert(pair<string,int>("Makedonska Kamenica",0));
    covid2005_2205.insert(pair<string,int>("Pehcevo",0));

    goto POPOLNUVANJE;
}
if(golemina == 2)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
       covid2005_2205.insert(pair<string,int>("Vinica",0));
    covid2005_2205.insert(pair<string,int>("Makedonska Kamenica",0));
    covid2005_2205.insert(pair<string,int>("Pehcevo",0));
    covid2005_2205.insert(pair<string,int>("Probistip",0));
    goto POPOLNUVANJE;
}
if(golemina == 1)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
       covid2005_2205.insert(pair<string,int>("Vinica",0));
    covid2005_2205.insert(pair<string,int>("Makedonska Kamenica",0));
    covid2005_2205.insert(pair<string,int>("Pehcevo",0));
    covid2005_2205.insert(pair<string,int>("Probistip",0));
    covid2005_2205.insert(pair<string,int>("Valandovo",0));
    goto POPOLNUVANJE;
}
if(golemina == 0)
{
    covid2005_2205.insert(pair<string,int>("Demir Hisar",0));
    covid2005_2205.insert(pair<string,int>("Demir Kapija",0));
    covid2005_2205.insert(pair<string,int>("Krusevo",0));
    covid2005_2205.insert(pair<string,int>("Gostivar",0));
    covid2005_2205.insert(pair<string,int>("Vinica",0));
    covid2005_2205.insert(pair<string,int>("Makedonska Kamenica",0));
    covid2005_2205.insert(pair<string,int>("Pehcevo",0));
    covid2005_2205.insert(pair<string,int>("Probistip",0));
    covid2005_2205.insert(pair<string,int>("Valandovo",0));
    covid2005_2205.insert(pair<string,int>("Bogdanci",0));
    goto POPOLNUVANJE;
}
POPOLNUVANJE: // label za popolnuvanje na mapa
  cout<<"Popolneta mapa: "<<endl;
 for (auto i : covid2005_2205) // prvicno pecatenje po kluc
		std::cout  << i.first << " "
				<< i.second << "\n";
	// prazen vector od parovi
	vector<pair<string, int>> vec;

	// kopiranje na klucevi i vrednost od mapa vo vektor
  map<string, int> :: iterator it2;
  for (it2=covid2005_2205.begin(); it2!=covid2005_2205.end(); it2++)
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
   
    string ime;
    string prezime;
    int broj_indeks;
    int datum_na_raganje; // stringovi za podatoci na student

cout<<"Vnesi ime i prezime  ";cin>>ime>>prezime;cout<<endl;
cout<<"Vnesi cifri na broj na indeks: ";cin>>broj_indeks;
string broj = to_string((int) broj_indeks); // pretvoranje na broj na indeks vo string
cout<<"Vnesi datum na raganje: ";cin>>datum_na_raganje;
vec.push_back(make_pair(ime,datum_na_raganje));
vec.push_back(make_pair("INKI",broj_indeks)); // vnes na parovi na kraj od vektor
ofstream file; // kreiranje na ofstream file za zapisuvanje na podatoci
 file.open(ime + prezime + "INKI" + broj + ".txt");
 file<<"Kovid bilans pomegu 20.05 i 22.05, po broj na zaboleni"<<endl;
for (int i = 0; i < vec.size(); i++)
	{
		file << vec[i].first << ": " << vec[i].second << endl;
	}
  
file.close(); // zatvoranje na ofstream fili i kraj na programa
	    return 0;
}
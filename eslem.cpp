#include "std.h"

void esleme();

int main(int tane, char** girdi) {

  if (tane < 2) 
    cout << "girdi yok\n";
  else {
    cout << "girdi\n";
    for(int i{1}; i<tane; ++i)
      cout << i << ": " << girdi[i] << endl;
  }

  esleme();

  return 0;
}

void arama(const Sozluk & eslem, const string & ara);

void esleme() {
  Sozluk eslem;
  eslem["program"] = "yazilim";
  eslem["recursion"] = "ozyineleme";
  eslem["true"] = "dogru";
  
  cout << "Eslem: \n";
  for(auto ikili : eslem)
    cout << ikili.first << "->" << ikili.second << endl;

  if (eslem.count("yok")==0 && eslem.count("program")==1)
    cout << "Worked.\n";

  auto ne = eslem.at("recursion");
  cout << ne << endl;
  arama(eslem, string("yok"));
  arama(eslem, string("true"));
}

void arama(const Sozluk & eslem, const string & ara) {
  auto it = eslem.find(ara);
  if (it != eslem.end())
    cout << ara << " -> " << it->second << endl;
  else
    cout << ara << " sozlukte yok.\n";
}

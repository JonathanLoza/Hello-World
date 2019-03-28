#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  string texto;
  map<char,int> abecedario;
  map<char,int>::iterator it;
  getline(cin, texto);
  cout<<texto<<endl;
  for(int i=0; i<texto.length(); ++i){
    it=abecedario.find(texto[i]);
    if (it != abecedario.end()){
      abecedario[texto[i]]+=1;
    }
    else{
      abecedario.emplace(texto[i],1);
    }
  }

  for(auto item:abecedario ){
    cout<<item.first<<": "<<item.second<<endl;
  }
  return 0;
}

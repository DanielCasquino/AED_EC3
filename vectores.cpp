#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
// al igual que los arrays, almacena los elementos en posiciones contiguas de la memoria

int maxNumberOfFamilies(int n, vector<vector<int>> &reservedSeats);
int main()
{

  // vector<int> records (5); // siempre y cuando determinemos el tamaño inicial del vector - el valor
  //                          // predeterminado de cada elemento será 0
  // vector<char> letras (10); // el valor predeterminado será un char indeterminado

  // // for(auto e : records) cout<< e << " ";
  // // cout<< endl;
  // // for(auto e : letras) cout<< e << " ";

  // vector<int> records2 {1,2,3,4};
  // // records2 = {1,2,3,4};

  // vector<char> letras2 {'a','b','c','d'};
  // // letras2 = {'a','b','c','d'};

  // vector<double> salarioBase(350,2125.50); // declaro e inicializo el vector con "350" elementos con cada uno de ellos igual a "2125.50"

  // // MÉTODOS at() - push_back() --> trabaja los vectores dinámicamente

  // // cout<< records[0] <<endl; // sí existe la posición en el límite del vector
  // // cout<< records[7] <<endl; // ¿Qué pasa si accedo a una posición no contemplada en el vector?

  // // at() = realiza comprobación de límites del tamaño o posiciones del vector
  // cout<< records2.at(0) <<endl;
  // // cout<< records.at(7) <<endl; // out_of_range

  // // records[8] = 1; // le da valor de 1 en una posición fuera de rango del vector --> también debe dar un error
  // cout << records2.at(3) <<endl;

  // records2.push_back(10);  // agrego al final
  // cout << records2.at(4) <<endl;
  vector<vector<int>> reservedSeats = {{2, 1}, {1, 8}, {2, 6}};
  int n = 2;

  vector<vector<int>> vec(n, vector<int>(10, 0));
  
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 10; j++){
      cout<< vec[i][j]<<" ";
    }
    cout<< endl;
  }

  // for(auto iter = v[0].begin(); iter!= v[0].end(); ++iter) cout<< *iter<<" ";
  // cout<< endl;
  // cout<< v.size() <<endl;

  // cout<< v[0].size() <<endl;

  return 0;
}

// clear

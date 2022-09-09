#include <iostream>
using namespace std;
const int N_ELEMENTS = 100;

int main()
{
    int *b = new int(N_ELEMENTS);
    cout << "1-100 ertekek duplazasa."<<endl;
    cout << "Ertek:"<<"\n";
     float atlag=0.0;
    for (int i = 0;i<N_ELEMENTS+1; i++)
    {
        b[i] = i * 2;
        atlag += b[i];
        cout<<i<<". szam: "<<b[i]<<"\n";
    }
    cout << "Atlag szamitasa: " << endl;
    atlag /= N_ELEMENTS;
    cout << "Atlag: " << atlag << endl;
    
    cout << "\nItt jart U3GK9P is!\n";
    
  return 0;
}

#include <iostream>
//kicsit konnyebb atlatni a kodot, ha alkalmazom a using namesapce std; -t
constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS helyett N_ELEMENTS es kerek zarojel szogletes helyett.
    std::cout << '1-100 ertekek duplazasa' //helyes verzio: "1-100 ertekek duplazasa"; 
    for (int i = 0;) // a pontosvesszo utan: i<N_ELEMENTS+1; i++)
    {
        b[i] = i * 2; //ide beirhato az atlag += b[i];
    }
    for (int i = 0; i; i++) // ez a for ciklus jelenleg nem csinal semmit.
    {
        std::cout << "Ertek:" // hianyzik a pontos vesszo. ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //felesleges 3x ugyan azt a ciklus lefuttatni ugyan azokkal a parameterekkel.
    {
        atlag += b[i] 
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

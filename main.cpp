#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //helytelen név
    int *b = new int[N_ELEMENTS];
    //cout végéről egy ; hiányzik
    std::cout << "1-100 ertekek duplazasa";
    //ez egy nagyon fura for loop (hiányzik az iteráció, illetve az összehasonlítás (sztm))
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    //Összehasonlítás
    for (int i = 0; i < N_ELEMENTS; i++)
    {

        std::cout << "Ertek:";
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    //itt egy , van a pontos ; helyett
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // ; végéről hiányzik
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    std :: cout<<"Ez a szoveg egy masik agrol kerult ide.";
    return 0;


}

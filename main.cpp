#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hibás változónév: 'NELEMENTS' helyett 'N_ELEMENTS'-t kell használni
    int *b = new int[NELEMENTS];  // Helyes kód: 'int *b = new int[N_ELEMENTS];'
    
    // Hibás szintaxis: a std::cout sor végén nincs pontosvessző
    std::cout << '1-100 ertekek duplazasa'  // Helyes kód: std::cout << "1-100 ertekek duplazasa" << std::endl;
    
    // Hibás ciklus: i++ hiányzik a ciklusból, és a ciklusfeltétel is hibás
    for (int i = 0;)  // Helyes kód: for (int i = 0; i < N_ELEMENTS; ++i)
    {
        b[i] = i * 2;
    }
    
    // Hibás ciklusfeltétel: az 'i' magában nem érvényes feltétel
    for (int i = 0; i; i++)  // Helyes kód: for (int i = 0; i < N_ELEMENTS; ++i)
    {
        std::cout << "Ertek:"  // Helyes kód: std::cout << "Ertek: " << b[i] << std::endl;
    }
    
    std::cout << "Atlag szamitasa: " << std::endl;

    // Hibás: az 'atlag' változó nincs inicializálva, így nem lehet hozzáadni értékeket
    int atlag;  // Helyes kód: int atlag = 0;
    
    // Hibás ciklusfeltétel: a ',' helyett ';' kell a ciklus feltételében
    for (int i = 0; i < N_ELEMENTS, i++)  // Helyes kód: for (int i = 0; i < N_ELEMENTS; ++i)
    {
        atlag += b[i]  // Helyes kód: atlag += b[i];
    }
    
    // Hiányzó pontosvessző: a fenti sor után nincs pontosvessző
    atlag /= N_ELEMENTS;  // Helyes kód: atlag /= N_ELEMENTS;
    
    std::cout << "Atlag: " << atlag << std::endl;

    // Nincs dinamikusan foglalt memória felszabadítása
    // Javasolt: delete[] b;  // Helyes kód: delete[] b; (a dinamikusan foglalt memória felszabadítása)
    
    return 0;
}

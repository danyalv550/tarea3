#include <iostream>

using namespace std;

class Mamifero{
    private:
        string pelaje;
        string mama;
        string especie;
    public:
        Mamifero(string,string,string);
        void mostrarMamifero();
};

class Carnivora : public Mamifero{
    private:
        string garras;
        string dientesafilados;
    public:
        Carnivora(string,string,string,string,string);
        void mostrarCarnivora();  
};

class Chiroptera : public Mamifero{
    private:
        string vuelo;
        string alimentacion;
    public:
        Chiroptera(string,string,string,string,string);
        void mostrarChiroptera();
};

class Cetacea : public Mamifero{
    private:
        string nado;
        string ecolocalizacion;
    public:
        Cetacea(string,string,string,string,string);
        void mostrarCetacea();
};

class Primate : public Mamifero{
    private:
        string pulgaresoponibles;
        string huelladigital;
    public:
        Primate(string,string,string,string,string);
        void mostrarPrimate();
};

class Marsupialia : public Mamifero{
    private:
        string marsupio;
        string huesosmarsupiales;
    public:
        Marsupialia(string,string,string,string,string);
        void mostrarMarsupialia();
};

Mamifero::Mamifero(string _pelaje, string _mama, string _especie){
    pelaje = _pelaje;
    mama = _mama;
    especie = _especie;
}

Carnivora::Carnivora(string _pelaje, string _mama, string _especie, string _garras, string _dientesafilados) : Mamifero(_pelaje,_mama,_especie){
    garras = _garras;
    dientesafilados = _dientesafilados;
}

Chiroptera::Chiroptera(string _pelaje, string _mama, string _especie, string _vuelo, string _alimentacion) : Mamifero(_pelaje,_mama,_especie){
    vuelo = _vuelo;
    alimentacion = _alimentacion;
}

Cetacea::Cetacea(string _pelaje, string _mama, string _especie, string _nado, string _ecolocalizacion) : Mamifero(_pelaje,_mama,_especie){
    nado = _nado;
    ecolocalizacion = _ecolocalizacion;
}

Primate::Primate(string _pelaje, string _mama, string _especie, string _pulgaresoponibles, string _huelladigital) : Mamifero(_pelaje,_mama,_especie){
    pulgaresoponibles = _pulgaresoponibles;
    huelladigital = _huelladigital;
}

Marsupialia::Marsupialia(string _pelaje, string _mama, string _especie, string _marsupio, string _huesosmarsupiales) : Mamifero(_pelaje,_mama,_especie){
    marsupio = _marsupio;
    huesosmarsupiales = _huesosmarsupiales;
}

void Mamifero::mostrarMamifero(){
    cout<<"Especie: "<<especie<<endl;
    cout<<"Tiene "<<mama<<endl;
    cout<<"Posee "<<pelaje<<endl;
}

void Carnivora::mostrarCarnivora(){
    mostrarMamifero();
    cout<<"Cuenta con "<<garras<<endl;
    cout<<"Tiene "<<dientesafilados<<endl;
}

void Chiroptera::mostrarChiroptera(){
    mostrarMamifero();
    cout<<"Cuenta con "<<vuelo<<endl;
    cout<<"Se alimenta de "<<alimentacion<<endl;
}

void Cetacea::mostrarCetacea(){
    mostrarMamifero();
    cout<<"Su forma de locomocion es el "<<nado<<endl;
    cout<<"Tiene "<<ecolocalizacion<<endl;
}

void Primate::mostrarPrimate(){
    mostrarMamifero();
    cout<<"Cuenta con "<<pulgaresoponibles<<endl;
    cout<<"Tiene "<<huelladigital<<endl;
}

void Marsupialia::mostrarMarsupialia(){
    mostrarMamifero();
    cout<<"Cuenta con "<<marsupio<<endl;
    cout<<"Tiene "<<huesosmarsupiales<<endl;
}

int main(){
    Carnivora carnivora1("un pelaje abultado gris", "mamas", "Lobo gris mexicano", "garras desafiladas y no retractiles", "42 dientes y caninos de 5cm" );
    Chiroptera chiroptera1("pelaje dorsal largo, sedoso y de color cafe con base clara", "mamas", "murcielago vampiro de pata peluda", "la habilidad de volar", "sangre");
    carnivora1.mostrarCarnivora();
    chiroptera1.mostrarChiroptera();
}
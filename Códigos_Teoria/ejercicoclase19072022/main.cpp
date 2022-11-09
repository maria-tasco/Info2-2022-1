#include <iostream>

using namespace std;
class Marcador {
private:
    char *color;
    int cantidad_tinta; //mililitros
    float tamanio[2]; //Ancho y alto en cm
    char *material_externo;
    bool tapita;
public:
    Marcador();//constructor
    ~Marcador(); //Destructor
    bool destapar_por_voz (char *palabra);
    int recargar_tinta();
    char *getColor() const;
    void setColor(char *newColor);
    int getCantidad_tinta() const;
    void setCantidad_tinta(int newCantidad_tinta);
};

int main(){   
    Marcador sharppie; //INSTANCIA de un objeto
    Marcador berol;
    cout<<sharppie.getColor()<<endl;
    //sharppie.setColor("Fucsia");
    cout<<sharppie.getColor()<<endl;
    cout<<berol.getColor()<<endl;
    return 0;
}

int Marcador::getCantidad_tinta() const{
    return cantidad_tinta;
}

void Marcador::setCantidad_tinta(int newCantidad_tinta){
    cantidad_tinta = newCantidad_tinta;
}

Marcador::Marcador(){
    cout<<"Ejecutando contructor clase marcador"<<endl;
    color="Negro";
    tapita=false;
    cantidad_tinta=2;
    tamanio[0]=1.5;
    tamanio[1]=15.0;
    material_externo="poliester";
}

Marcador::~Marcador(){
    cout<<"Ejecutando destructor clase marcador"<<endl;
    //Libera memoria que se haya definido en el heap
}

char *Marcador::getColor() const{
    return color;
}

void Marcador::setColor(char *newColor){
    color = newColor;
}
/*
 * Objeto: Marcador -> Clases
 * ==================
 * Atributos:
 * Color -> char *
 * tamaño -> alto y grosor ->
 * cantidad de tinta -> int
 * Material externo -> metal, plastico, cartón. -> char *
 * tapita -> bool
 * =======================
 * Caracteristicas Funcionales:
 * se tape y destape por voz. -> bool destapar_por_voz (char *palabra);
 * bool destapar_por_voz (char *palabra){
 *
 * }
*/













/*
 * ¿Qué voy a hacer?
 *
 * OBJETO: Marcador. -> Clase
 *
 * Caracteristicas Estructurales: -> Atributos/miembros de una clase -> Variables
 * +color -> string
 * tipo de tinta -> char *
 * +tamaño -> alto y grosor ->
 * +cantidad de tinta -> int
 * estilo de la punta -> char *
 * +Material externo -> metal, plastico, cartón. -> char *
 * Material interno -> espuma. -> char *
 * Recipiente almacenador de tinta -> char *
 * borrador -> bool
 * +tapita -> bool
 * Temperatura -> int, float
 * escala metrica -> bool, objeto
 * =============================
 *
 * Caracteristicas Funcionales: -> Métodos
 * Liberar tinta.
 * fusionarse con el color de otros marcadores
 * anti derrame de tinta.
 * luz.
 * Graduación del estilo de punta.
 * +se tape y destape por voz.
*/



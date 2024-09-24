#include <iostream>
#include <iomanip>


//Clase rectangulo
class Rectangulo{
  //Atributos de los objetos de la clase rectangulo
  private:
    float largo, ancho;
  //Metodos de los objetos de la clase rectangulo
  public:
    //Metodo constructor del objeto dentro de la clase Rectangulo
    Rectangulo(float, float);
    //Metodos del objeto dentro de la clase Rectangulo
    void perimetro();
    void area();
};

//Metodo constructor de la clase Rectangulo
Rectangulo::Rectangulo(float _largo, float _ancho){
  largo=_largo;
  ancho=_ancho;
}

//Metodo perimetro de la clase Rectangulo
void Rectangulo::perimetro(){
  float perimetro ((2*largo)+(2*ancho));
  std::cout<<"El perimetro del rectangulo es: "<<std::fixed<<std::setprecision(4)<<perimetro<<std::endl;
}

//Metodo area de la clase Rectangulo
void Rectangulo::area(){
  float area (largo*ancho);
  std::cout<<"El area del rectangulo es: "<<std::fixed<<std::setprecision(4)<<area<<std::endl;
}


int main() {
  float userlargo,userancho;

  //Interfaz de usuario
  std::cout<<"Introduzca el Largo: ";
  std::cin>>userlargo;
  std::cout<<"Introduzca el Ancho: ";
  std::cin>>userancho;
  std::cout<<std::endl;
  
  //Creacion de los objetos t1 y t2 de la clase Rectangulo
  Rectangulo t1=Rectangulo(userlargo, userancho);

  //Se llama el metodo perimetro y area para el objeto t1
  t1.perimetro();
  t1.area();

  return 0;
}
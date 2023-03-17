// Zap707_03_17_2023_Objetos_Pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
	string nombre;
	string tipo;
	int PuntosDeVida;
	int FuerzaDeAtaque;

public:
	Pokemon()
	{
		nombre = "";
		tipo = "";
		PuntosDeVida = 0;
		FuerzaDeAtaque = 0;
	}
	Pokemon(string n, int p, int f, string t)
	{
		nombre = n;
		tipo = t;
		PuntosDeVida = p;
		FuerzaDeAtaque = f;
	}
    // Métodos Setter
    void setNombre(string n)
    {
        nombre = n;
    }

    void setPuntosDeVida(int p)
    {
        PuntosDeVida = p;
    }

    void setFuerzaDeAtaque(int f)
    {
        FuerzaDeAtaque = f;
    }

    void setTipo(string t) 
    {
        tipo = t;
    }

    // Métodos Getter
    string getNombre()
    {
        return nombre;
    }

    int getPuntosDeVida() 
    {
        return PuntosDeVida;
    }

    int getFuerzaDeAtaque() 
    {
        return FuerzaDeAtaque;
    }

    string getTipo()
    {
        return tipo;
    }
    
    void mostrarCaracteristicas()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Puntos de vida: " << PuntosDeVida << endl;
        cout << "Fuerza de ataque: " << FuerzaDeAtaque << endl;
    }

    // Destructor
    ~Pokemon() {}
};

int main()
{
   
    Pokemon pikachu ("Pikachu", 100, 50, "Electrico");
    pikachu.mostrarCaracteristicas();

    pikachu.setPuntosDeVida(80);
    cout << "\nVida despues de daño: " << pikachu.getPuntosDeVida() << std::endl;

    return 0;

}

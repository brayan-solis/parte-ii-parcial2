#include <iostream>
#include <stdio.h>  
#include <string.h> 
using namespace std;
const char *nombe_archivo = "archivo.dat";

class Estudiante{
	// atributo
	protected : string nombres, apellidos, direccion, genero;
				int telefono;
	//constructor
	protected :
		Estudiante(){
		}
		Estudiante(string nom, string ape, string dir,string gen, int tel){
			nombres= nom;
			apellidos= ape;
			direccion= dir;
			telefono= tel;
			genero= gen;
		}
	//metodo
	//void mostrar ();
	
};

class Persona : Estudiante {
	//atributos
	private: string carnet;
	
	// constructor
	public :
	Persona (){
		}
		
	Persona(string nom, string ape, string dir, string gen, int tel, string n): Estudiante(nom, ape, dir, gen, tel){
		carnet= n;
	}	
	// metodos
	//set (modificar)
	void setCarnet(string n){ carnet= n; }
	void setNombres (string nom){ nombres= nom; }
	void setApellidos (string ape){ apellidos= ape; }
	void setGenero (string gen) { genero= gen;}
	void setDireccion (string dir){ direccion= dir; }
	void setTelefono (int tel){ telefono= tel; }
	//get (mostrar)
	string getCarnet(){ return carnet;}
	string getNombres(){ return nombres;}
	string getApellidos(){ return apellidos;}
	string getGenero(){ return genero;}
	string getDireccion(){ return direccion;}
	int getTelefono(){ return telefono;}
	
	
	//metodos

	void mostrar (){
		cout <<"___________________________________"<<endl;
		cout <<"\n  ***** DATOS DEL ESTUDIANTE *****\n"<<endl;
		cout <<"CARNET:"<<carnet<<" \n"<<"GENERO? M/F:"<<genero<<" \n"<<"NOMBRE:"<<nombres<<" "<<apellidos<<" \n"<<"DIRECCION:"<<direccion<<" \n"<<"No. TEL:"<<telefono<<endl;

	}
};
struct Estudiantes{
	int carnet;
	char nombre[50];
	char apellido[50];
	int telefono;
};
void menu();
void leerE();
void mostrar ();
main (){	
	menu();
	leerE();
	string carnet, genero, nombres, apellidos, direccion;
	int telefono;
	
	Persona obj= Persona (genero, nombres, apellidos, direccion, telefono, carnet);
	/*cout<<"\n\n\t\tDatos del Estudianre\n"<<"\t\t"<<obj.getCarnet()<<" "<<obj.getGenero()<<" "<<obj.getNombres()<<" "<<obj.getApellidos()<<" "<<obj.getDireccion()<<" "<<obj.getTelefono()<<" "<<endl;*/	
	//obj.mostrar();
}
void menu(){

	
int n1=0,n2=0;
int opcion;
int ingresar, mostrar_tabla, modificar, borrar;

cout<<"\t\t\t REGISTROS DE ESTUDIANTES \n\n";
cout<<"\tQue desea realizar?:\n\n";
cout<<"\t\tOpcion 1: Ingresar nuevo Registro\n";
cout<<"\t\tOpcion 2: Mostrar registros\n";
cout<<"\t\tOpcion 3: Modificar Datos de un Registro\n";
cout<<"\t\tOpcion 4: Eliminar Registro\n\n";

cout<<"\tIndique su opcion:\t\t";
cin>>opcion;

	
}

void leerE(){
	string carnet, genero, nombres, apellidos, direccion;
	int telefono;
	
	system("cls");
	FILE* archivo = fopen(nombe_archivo, "ab"); 
	char continuar;
		Estudiantes estudiante;
		 string nombre,apellido;
		do{
			fflush(stdin);
			
			
		cout<<"Cual es su genero? M/F:";
		cin>>genero;
		cin.ignore();
		
		cout<<"Ingrese el Telefono:";
		cin>>telefono;
		cin.ignore();
        
		cout<<"Ingrese el Carnet:";
		cin>>carnet;
		cin.ignore();
        
		cout<<"Ingrese el Nombre:";
		cin>>nombre;
		cout<<"\t";
		cin>>nombre;
		cin.ignore();
			
		cout<<"Ingrese el Apellido:";
		cin>>apellido;
		cin.ignore(); 
		
		
		
		fwrite( &estudiante, sizeof(Estudiantes), 1, archivo );
		
		cout<<"Desea Agregar otro Nombre s/n : ";
		cin>>continuar;
		
	Persona obj= Persona (genero, nombres, apellidos, direccion, telefono, carnet);	
	cout<<"\n\n\t\tDatos del Estudiante\n"<<"\t\t"<<obj.getCarnet()<<" "<<obj.getGenero()<<" "<<obj.getNombres()<<" "<<obj.getApellidos()<<" "<<obj.getDireccion()<<" "<<obj.getTelefono()<<" "<<endl;
	obj.mostrar();
	
	
		
		} while((continuar=='s') || (continuar=='S') );
		
	
	fclose(archivo);
	
}
/*void crearE(){
system("cls");
	system("cls");
	FILE* archivo = fopen(nombe_archivo, "rb");
	if(!archivo) {
		archivo = fopen(nombe_archivo, "w+b");
	}
	Estudiantes estudiante;
	int registro=0;
	fread ( &estudiante, sizeof(Estudiantes), 1, archivo );	
		do{
		cout << registro <<" |  "<< estudiante.carnet <<" | "<< estudiante.nombre<<" "<<estudiante.apellido<<" "<<estudiante.telefono<<endl;
        
        
		fread ( &estudiante, sizeof(Estudiantes), 1, archivo );
		registro += 1;	
		} while (feof( archivo ) == 0);
		
    cout<<endl;
    
		fclose(archivo);
	}*/
	
	
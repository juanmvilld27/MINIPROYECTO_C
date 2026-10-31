/*
AUTOR: Juan Villacis


PROGRAMA DE REGISTRO DE MASCOTAS EN VETERINARIA "MI MASCOTA"
MAXIMO DE REGISTROS: 20

MENU DE OPCIONES:

1.- INGRESAR DATOS DE MASCOTA:
    -TIPO DE MASCOTA
        -CAN
        -FELINO
        -AVE
    -NOMBRE
    -EDAD
    -PESO
    -HOSPITALIZADO
        -SI
        -NO
2.- REPORTES
    # TOTAL DE ATENCIONES
    # TIPO DE MASCOTAS
    # TOTAL DE HOSPITALIZADOS
3.- BUSCAR
    -DATOS DE TURNO
SALIR DEL SISTEMA
*/

#include<iostream>
using namespace std;

void ingreso(int a, int $tMascota[],string $nMascota[],int $eMascota[],double $pMascota[],int $hMascota[]);
void buscaTurno(int a,int tipo,string nombre,int edad,double peso,int hosp);
void reporteTipo(int $vec[],int $x,int $y,int $z);


int main(){
    int op,tipoMascota[20],edadMascota[20],hospMascota[20],i,numTurno,reporte,ca,av,fe;
    double pesoMascota[20];
    string nombreMascota[20];
    ca=0;
    av=0;
    fe=0;
    i=0;
    do
    {
        system("clear");
        cout<<"***  VETERINARIA MI MASCOTA  ***"<<endl<<endl;
        cout<<"MENU DE OPCIONES: "<<endl<<endl;
        cout<<"1.- Ingreso de Mascota."<<endl;
        cout<<"2.- Reportes de registros."<<endl;
        cout<<"3.- Buscar registros."<<endl;
        cout<<"4.- Cerrar sistema."<<endl;
        cout<<"Elija opción: ";
        do
        {
            cin>>op;
            if ((op<1)||(op>4))
            {
            cout<<"Error: rango no valido. Elija la opcion nuevamente: ";
            }
            
        } while ((op<1)||(op>4));
        switch (op)
        {
        case 1:
            if (i<20)
            {
                system("clear");
                ingreso(i,tipoMascota,nombreMascota,edadMascota,pesoMascota,hospMascota);
                i+=1;
            }
            else
            cout<<"limite maximo de turnos (20)";
            break;
        case 2:
            system("clear");
            cout<<"REPORTES: "<<endl<<endl;
            cout<<"1. TOTAL DE ATENCIONES"<<endl;
            cout<<"2. TIPO DE MASCOTAS"<<endl;
            cout<<" Elija la opción que desea consultar: ";cin>>reporte;
            switch (reporte)
            {
            case 1:
                cout<<"Se han realizado un total de "<<i<<" atenciones.";
                cin.ignore();
                cout << "\nPresione ENTER para continuar...";
                cin.get();
                break;
            case 2:
                reporteTipo(tipoMascota,ca,fe,av);
                cout<<"Se han registrado: "<<ca<<" canes.";
                cout<<"Se han registrado: "<<fe<<" felinos.";
                cout<<"Se han registrado: "<<av<<" aves.";
                cin.ignore();
                cout << "\nPresione ENTER para continuar...";
                cin.get();
                break;
            case 3:
                cout<<"Se han realizado un total de "<<i<<" atenciones.";
                cin.ignore();
                cout << "\nPresione ENTER para continuar...";
                cin.get();
                break;
            default:
                cin.ignore();
                cout << "\nRango no valido volvera al menu principal...";
                cin.get();
                break;
            }
            break;
        case 3:
            system("clear");
            cout<<"BUSQUEDA DE REGISTROS: "<<endl<<endl;
            cout<<"Ingrese numero de turno: ";cin>>numTurno;
            numTurno-=1;
            buscaTurno(numTurno,tipoMascota[numTurno],nombreMascota[numTurno],edadMascota[numTurno],pesoMascota[numTurno],hospMascota[numTurno]); 
            break;
        default:
            break;
        }




    } while (op!=4);
    cin.ignore();
    cout << "\nPresione ENTER para continuar...";
    cin.get();
    return 0; 
}

void ingreso(int a, int $tMascota[],string $nMascota[],int $eMascota[],double $pMascota[],int $hMascota[]){
    cout<<"INGRESO DE MASCOTA"<<endl<<endl;
    cout<<"Ingrese los datos siguientes: "<<endl<<endl;
    cout<<"TIPO DE MASCOTA (1.Can 2. Felino 3.Ave) : ";cin>>$tMascota[a];
    cout<<"NOMBRE MASCOTA                          : ";cin>>$nMascota[a];
    cout<<"EDAD MASCOTA (0-20) [años]              : ";cin>>$eMascota[a];
    cout<<"PESO MASCOTA (0-30) [Kg]                : ";cin>>$pMascota[a];
    cout<<"HOSPITALIZADO MASCOTA (1. SI 2. NO)     : ";cin>>$hMascota[a];
}
void buscaTurno(int a,int tipo,string nombre,int edad,double peso,int hosp){
    cout<<"El turno: "<<a+1<<" pertenece a la mascota: "<<endl;
    cout<<"TIPO MASCOTA  :";
    switch (tipo)
    {
    case 1:
        cout<<"CAN"<<endl;
        break;
    case 2:
        cout<<"FELINO"<<endl;
        break;
    case 3:
        cout<<"AVE"<<endl;
        break;
    default:
        break;
    }
    cout<<"NOMBRE       : "<<nombre<<endl;
    cout<<"EDAD         : "<<edad<<endl;
    cout<<"PESO         : "<<peso<<endl;
    cout<<"HOSPITALIZADO: ";
    switch (hosp)
    {
    case 1:
        cout<<"si"<<endl;
        break;
    case 2:
        cout<<"no"<<endl;
        break;
    default:
        break;
    }
    cout << "\nPresione ENTER para continuar...";
    cin.ignore();
    cin.get();
}
void reporteTipo(int $vec[],int $x,int $y,int $z){
    int ii;
    $x=1;
    $y=1;
    $z=1;
    for ( ii = 0; ii < 20; ii++)
    {
        if ($vec[ii]==1)
        {
            $x+=1;
        }
        else if ($vec[ii==2])
        {
            $y+=1;
        }
        else if ($vec[ii==3])
        {
            $z+=1;
        }
    }
    
}

    
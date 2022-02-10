#include<iostream>
#include<string.h>
using namespace std;
struct Car
{
    private :
      char name[10];
      int gas;
      int speed;

    public :
    int setCar(const char *carName,int carGas){
      strcpy(name,carName);
      gas = carGas;
    }
      int getCar(){
        cout<<"소유자 : "<< name;
        cout << "연료량 : "<< gas;
        cout << "속도 : " << speed;
      }

      int Accel () {
        gas -= 5;
        speed += 10;
      }

      int Break() {
        speed -= 5;
        }
  };

int main() {
    Car BMW;
    BMW.setCar("JINHYO",100);
    BMW.getCar();
    BMW.Accel();
    BMW.Accel();
}

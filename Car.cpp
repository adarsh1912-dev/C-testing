#include "bits/stdc++.h"
using namespace std;

class Car{

  protected:

  string brand,model;
  bool isEngineOn;
  int currentSpeed;

  public:

  Car(string a, string b){
    brand = a;
    model = b;
    isEngineOn = false;
    currentSpeed = 0;
  }

  void startEngine(){
    this->isEngineOn = true;
    cout << brand << " " << model << " " <<  ": Engine started " << endl;   
  }

  void stopEngine(){
    isEngineOn = false;
    currentSpeed = 0;
    cout << brand << " " << model << " : Engine stopped" << endl; 
  }

  void acclerate(){
    if(!isEngineOn){
      cout << brand << " " << model << " : cannot accelerate! Engine is off. " << endl;
    }
    currentSpeed+=20;
    cout << brand << " " << model << " : Accelerating to " << currentSpeed << "km/h" << endl; 
  }

  void brake(){
    currentSpeed -= 20;
    if(currentSpeed < 0)currentSpeed = 0;
    cout << brand << " " << model << " : Braking! Speed is now " << currentSpeed << "km/h" << endl;
  }

  virtual ~Car() {}


};

class ManualCar : public Car{

  private:
  int currentGear; //specific to manual car

  public:
  ManualCar(string b, string m) : Car(b,m){

    currentGear = 0;

  }

  void shiftGear(int gear){
    currentGear = gear;
    cout << brand <<  " " <<  model <<  " : Shifted to gear " << currentGear << endl;
  }

};

class ElectricCar : public Car{

  private:
  int batteryLevel;

  public:
  ElectricCar(string b, string m) : Car(b,m){
    batteryLevel = 100;
  }

  void chargeBattery(){
    batteryLevel = 100;
    cout << brand << " " << model << " : Battery fully charged! " << endl;
  }

};


int main(){
  ManualCar* myManualCar = new ManualCar("Tata","Harrier");
  myManualCar->startEngine();
  myManualCar->shiftGear(1);
  myManualCar->acclerate();
  myManualCar->brake();
  myManualCar->stopEngine();
  delete myManualCar;

  cout << "---------------------------------" << endl;

  ElectricCar* myElectricCar = new ElectricCar("Tesla", "Model S");
  myElectricCar->chargeBattery();
  myElectricCar->startEngine();
  myElectricCar->acclerate();
  myElectricCar->brake();
  myElectricCar->stopEngine();
  delete myElectricCar;

  return 0;

}

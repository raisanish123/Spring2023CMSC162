#include <iostream>
 using namespace std;

// Base class
class Vehicle {
   protected:
      int id;
      double cost;
  Vehicle(){
    cout<<"Inside vehicle"<<endl;
  }
   public:
    
      void setId(int id) {
         this->id=id;
      }
      void setCost(int cost) {
         this->cost = cost;
      }
      double getCost(){
        return cost;
      }
};
// Derived class, private mode
class GasVehicle: private Vehicle {
   private:
      double tankCapacity;
  public:
      GasVehicle(){
        cout<<"Gas Vehicle"<<endl;
      }
      void setTankCapacity(double tc){
        tankCapacity=tc;
      }
      void print(){
        cout<<"Gas Vehicle: fuel capacity: "<< tankCapacity<< " gallons, cost: $"<<getCost()<<endl;
      }
      void setCost(double cost){
        this->cost=cost;
      }
};

// Derived class, public mode
class ElectricVehicle: public Vehicle {
   private:
      double batteryCapacity;
  public:
      void setBatteryCapacity(double bc){
        batteryCapacity=bc;
      }
      void print(){
        cout<<"Hybrid Vehicle: battery capacity: "<< batteryCapacity<< " kWH, cost: $"<<getCost()<<endl;
      }
      
};

int main(void) {
   GasVehicle ford;
   ford.setTankCapacity(20);
   ford.setCost(40000);
   ford.print();

   ElectricVehicle tesla;
   tesla.setBatteryCapacity(30);
   tesla.setCost(80000);
   tesla.print();
   return 0;
}
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
  int id;
  double cost;

public:
  void setId(int id) { this->id = id; }
  void setCost(int cost) { this->cost = cost; }
  double getCost() { return cost; }
  // void print() { // add virtual keyword here later and check
  //   cout << "Vehicle: cost: $" << getCost() << endl;
  // }
//after running it and checking, comment the above print and uncomment the below print
  virtual void print() { // added virtual keyword here later and check
    cout << "Vehicle: cost: $" << getCost() << endl;
  }
};
// Derived class, private mode
class GasVehicle : public Vehicle {
private:
  double tankCapacity;

public:
  void setTankCapacity(double tc) { tankCapacity = tc; }
  void print() {
    cout << "Gas Vehicle: fuel capacity: " << tankCapacity
         << " gallons, cost: $" << getCost() << endl;
  }
  void setCost(double cost) { this->cost = cost; }
};

// Derived class, public mode
class HybridVehicle : public Vehicle {
private:
  double batteryCapacity;

public:
  void setBatteryCapacity(double bc) { batteryCapacity = bc; }
  void print() {
    cout << "Hybrid Vehicle: battery capacity: " << batteryCapacity
         << " kWH, cost: $" << getCost() << endl;
  }
};

int main(void) {
  Vehicle v1;
  v1.setId(0);
  v1.setCost(20000);
  v1.print();

  GasVehicle gv;
  gv.setTankCapacity(20);
  gv.setCost(40000);

  HybridVehicle hv;
  hv.setBatteryCapacity(30);
  hv.setCost(80000);

   Vehicle *vh1;
   vh1 = &gv;
  // //For pointer objects, use -> instead of .
   vh1->print();  //Add virtual to the print in Vehicle and test again
   gv.print();

   vh1 = &hv;
   vh1->print();
   hv.print();
  cout << "Address in vh1: "<<vh1<<endl
       << "address of gas vehicle object: " << &gv
       << "\naddress of hybrid vehicle object: " << &hv << endl;
  return 0;
}
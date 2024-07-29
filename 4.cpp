#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    void set_vehicle_details(const string &mk, const string &mdl, int yr) {
        make = mk;
        model = mdl;
        year = yr;
    }
    void get_vehicle_details() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
class Car : public Vehicle {
private:
    int seating_capacity;
    string fuel_type;
public:
    void set_car_details(const string &mk, const string &mdl, int yr, int sc, const string &ft) {
        set_vehicle_details(mk, mdl, yr);
        seating_capacity = sc;
        fuel_type = ft;
    }
    void get_car_details() const {
        get_vehicle_details();
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
    }
};

class Truck : public Vehicle {
private:
    double payload_capacity;
    double towing_capacity;

public:
    void set_truck_details(const string &mk, const string &mdl, int yr, double pc, double tc) {
        set_vehicle_details(mk, mdl, yr);
        payload_capacity = pc;
        towing_capacity = tc;
    }
    void get_truck_details() const {
        get_vehicle_details();
        cout << "Payload Capacity: " << payload_capacity << " kg" << endl;
        cout << "Towing Capacity: " << towing_capacity << " kg" << endl;
    }
};
int main() {
    Car car;
    Truck truck;
    car.set_car_details("Toyota", "Camry", 2020, 5, "Gasoline");
    truck.set_truck_details("Ford", "F-150", 2019, 1300, 4500);
    cout << "Car Details:" << endl;
    car.get_car_details();
    cout << endl;
    cout << "Truck Details:" << endl;
    truck.get_truck_details();
    cout << endl;
    return 0;
}

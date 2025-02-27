#include<iostream>
#include<string>
using namespace std;

class Motorcycle { 
private:
    int year;
    string brand;
    string model;
    double Price;
    double mileage;
    int weight;
    int tankcapacity;

public:
    
    Motorcycle(){
        year = 2025;
        brand = "hero";
    }
    
  
    Motorcycle(string mod, double amt, double mile, int kg, int ltr){
        model = mod;
        Price = amt;
        mileage = mile;
        weight = kg;
        tankcapacity = ltr;
        brand = "hero"; 
    }

    void display() {
        cout << "Brand: " << brand << "\n";
        cout << "Year: " << year << "\n";
        cout << "Model: " << model << "\n";
        cout << "Price: " << Price << "\n";
        cout << "Mileage: " << mileage << "\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Tank Capacity: " << tankcapacity << " liters\n";
    }
};

int main() {
   
    Motorcycle m1("Splendor", 90000.00, 36.00, 177, 13);
    m1.display();
    return 0;
}

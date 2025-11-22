#include <iostream>
using namespace std;

class DistanceM;    
class DistanceMiles;

class DistanceKM {
    double km;
public:
    DistanceKM(double k = 0) : km(k) {}

    // Conversion constructor: DistanceKM -> DistanceM
    DistanceKM(const DistanceM& m);

    double getKM() const { return km; }
    void display() const { cout << km << " km" << endl; }
};

class DistanceM {
    double meters;
public:
    DistanceM(double m = 0) : meters(m) {}

    // Conversion constructors
    DistanceM(const DistanceKM& kmObj) {
        meters = kmObj.getKM() * 1000;
    }

    DistanceM(const DistanceMiles& mileObj);

    double getM() const { return meters; }
    void display() const { cout << meters << " m" << endl; }

    // Conversion operators
    operator DistanceKM() const { 
        return DistanceKM(meters / 1000.0); 
    }

    operator DistanceMiles() const;
};

class DistanceMiles {
    double miles;
public:
    DistanceMiles(double m = 0) : miles(m) {}

    // Conversion constructor: DistanceMiles -> DistanceM
    DistanceMiles(const DistanceM& mObj) {
        miles = mObj.getM() / 1609.34;
    }

    double getMiles() const { return miles; }
    void display() const { cout << miles << " miles" << endl; }

    // Conversion operator: DistanceMiles -> DistanceM
    operator DistanceM() const { 
        return DistanceM(miles * 1609.34); 
    }
};

// Define DistanceM constructor from DistanceMiles
DistanceM::DistanceM(const DistanceMiles& mileObj) {
    meters = mileObj.getMiles() * 1609.34;
}

// Define DistanceM -> DistanceMiles conversion operator
DistanceM::operator DistanceMiles() const {
    return DistanceMiles(meters / 1609.34);
}

// Define DistanceKM constructor from DistanceM (already declared)
DistanceKM::DistanceKM(const DistanceM& mObj) {
    km = mObj.getM() / 1000.0;
}

int main() {
    // Step i: Create a DistanceKM object with 10 km
    DistanceKM dkm(10);
    cout << "Distance in KM: ";
    dkm.display();

    // Step ii: Convert to DistanceM, then to DistanceMiles
    DistanceM dm = dkm;
    cout << "Converted to M: ";
    dm.display();

    DistanceMiles dmi = dm;
    cout << "Converted to Miles: ";
    dmi.display();

    // Step iii: Convert DistanceMiles back to DistanceM, then back to DistanceKM
    DistanceM dm2 = dmi;
    cout << "Miles back to M: ";
    dm2.display();

    DistanceKM dkm2 = dm2;
    cout << "M back to KM: ";
    dkm2.display();

    return 0;
}

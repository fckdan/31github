#include <iostream>

class WaterCounter {
private:
    double totalLiters;

public:
    WaterCounter() : totalLiters(0.0) {}

    void drinkWater(double liters) {
        totalLiters += liters;
    }

    double getTotalLiters() const {
        return totalLiters;
    }
};

int main() {
    WaterCounter waterTracker;

    // Example: Drinking 1.5 liters
    waterTracker.drinkWater(1.5);

    // Example: Drinking 0.75 liters
    waterTracker.drinkWater(0.75);

    // Display total consumed liters
    std::cout << "Total liters of water consumed: " << waterTracker.getTotalLiters() << " liters" << std::endl;

    return 0;
}
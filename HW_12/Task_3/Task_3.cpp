#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
    assert(speed > 0); 
    return distance / speed; 
}

int main() {
    float distance, speed;

    std::cout << "Enter distance (in kilometers): ";
    std::cin >> distance;

    std::cout << "Enter speed (in km/h): ";
    std::cin >> speed;

    
    try {
        float time = travelTime(distance, speed);
        std::cout << "Travel time: " << time << " hours" << std::endl;
    }
    catch (...) {
        std::cerr << "Error: Speed must be positive." << std::endl;
    }

    return 0;
}
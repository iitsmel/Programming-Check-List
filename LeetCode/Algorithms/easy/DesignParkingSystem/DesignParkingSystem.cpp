# include <vector>
using std::vector;

class ParkingSystem {
    vector<int> adding;
public:
    ParkingSystem(int big, int medium, int small) {
        adding = {big, medium, small};
    }
    
    bool addCar(int carType) {
        return (adding[carType - 1]--) > 0;
    }
};

class ParkingSystem {
public:
    vector<int> slots = vector<int> (3, 0);
    ParkingSystem(int big, int medium, int small) {
        slots[0] = big;
        slots[1] = medium;
        slots[2] = small;
    }
    
    bool addCar(int carType) {
        if (slots[carType-1] > 0){
            slots[carType-1]--;
            return 1;
        }else{
            return 0;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
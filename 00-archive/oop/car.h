class Car {

private:
    //Non Static initialization
    float fuel { 0 };
    float speed { 0 };

    int passengers { 0 };
    int arr[5] = {1, 2, 3};
    ///auto i = 5, does not work

    //Static member variables, qualified with static keyword
    //Not part of the object, but belong to class, only one copy exist
    //cannot be initalized inside class, needs to be defined outside class
    //for initialization.
    static int totalCount;

public:
    Car();
    Car(float fuel, int passangers);
    Car(float fuel, float speed, int passengers);

    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();

    //static member functions
    //functions qualified with static keyword
    //required only in declaration
    //belong to class and not objects
    //do not recive this pointer
    //cannot access non-static members of the class
    //can be invoked directly through the class name
    static void CarCount();

    //Constant Member Functions
    //Member functions qualified with const keyword
    //Such functions cannot change value of any member variables
    //Useful for read only functions
    //Constant objects can only invoke constant member functions
    const void ShowFuel();
};
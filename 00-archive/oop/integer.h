class Integer {
    int *m_pInt;

public:
    Integer();
    Integer(int value);
    //All should be defined if a user implements them
    //Destructor
    //Copy Constructor
    //Copy Assigment operator

    //This will be due to allocation of some resource in a constructor
    // Destructor will free the resource
    // Copy constructor will preform a deep copy
    // Copy assigment operation will also preform a deep copy

    // to avoid infinite loop pass by refrence 
    // use const, so the value cannot be changed
    Integer(const Integer  &obj);

    int GetValue()const;
    void SetValue(int value);

    ~Integer();
};
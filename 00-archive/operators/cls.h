class Integer {
    int *m_pInt;

public:
    Integer() {
        m_pInt = new int(0);
    }

    Integer(int value) {
        m_pInt = new int(value);
    }

    Integer(const Integer &obj) {
        m_pInt = new int(*obj.m_pInt);
    }

    ~Integer() {
        delete m_pInt;
    }

    int GetValue() {
        return *m_pInt;
    }

    void SetValue(int val) {
        *m_pInt = val;
    }

    Integer operator +(const Integer &a)const {
        Integer temp;
        *temp.m_pInt = *m_pInt + *a.m_pInt;
        return temp;
    }

    // pre increment is more efficent than post, since post requires
    // creation of a temporary object
    Integer &operator ++() {
        ++(*m_pInt);
        return *this;
    }

    //pass in int to distiguish between post and pre increment
    Integer operator ++(int) {
        Integer temp(*this);
        ++(*m_pInt);
        return temp;
    }

    // comparison operator
    bool operator ==(const Integer &obj)const {
        return *m_pInt == *obj.m_pInt;
    }

    Integer &operator = (const Integer &obj) {
        if(this == &obj)
            return *this;

        delete m_pInt;
        m_pInt = new int(*obj.m_pInt);
        return *this;
    }
};
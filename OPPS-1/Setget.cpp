class Student{
    public:
    int rollnumber;

    private:
    int age;

    public:

    void display(){
        cout<< age << " " << rollnumber << endl;
    }
    int getage(){
        return age;
    }

    void setAge(int a, int password){
        if(password != 123){
            return;
        }
        if (a>0){
            return;
        }
        age = a;
    }
};
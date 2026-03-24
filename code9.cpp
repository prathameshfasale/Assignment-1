// get information about my car
#include<iostream>
using namespace std;
class car{
    public: 
    string Brand;
    string model;
    string fuel_type;
    int Maxspeed;
    int mileage;

     public:
     void showInfo()
     {
        cout<<Brand<<" "<<model<<" "<<fuel_type<<" "<<Maxspeed<<" "<<mileage<<" ";

     }
};

int main()
 {
    car Obj;
    Obj.Brand= "Punch ";
    Obj.model= "Facelift";
    Obj.fuel_type= "Petrol  ";
    Obj.Maxspeed= 120;
    Obj.mileage= 20;

    Obj.showInfo();
    return 0; 
 
}
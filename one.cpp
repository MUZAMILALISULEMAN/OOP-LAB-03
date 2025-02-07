#include<iostream>
using namespace std;
class BMI{
    public:
        double bmi,weight,height;
        string status;
    
    void getInput(){

        cout<<"YOUR WEIGHT(KG): ";
        cin>>weight;
        cout<<"YOUR HEIGHT(M): ";
        cin>>height;

    }

    double calculateBMI(double w ,double h){
        weight = w/(h*h)*703;
    }
    void showStatus(double bmi){



    }

}

int main(){





return 0;
}
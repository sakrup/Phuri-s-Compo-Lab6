#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    double rad = 0.0;
    rad = deg*(M_PI/180);
    return rad;
}

double rad2deg(double rad){
    double deg = 0.0;
    deg = rad*(180/M_PI);
    return deg;
}

double findXComponent(double l1, double l2, double a1, double a2){
    double V1 = l1*cos(a1);
    double V2 = l2*cos(a2);
    double XComponent = V1 + V2;
    return XComponent;
}

double findYComponent(double l1, double l2, double a1, double a2){
    double V1 = l1*sin(a1);
    double V2 = l2*sin(a2);
    double YComponent = V1 + V2;
    return YComponent;
}

double pythagoras(double XComp, double YComp){
    double C = sqrt(pow(XComp,2)+pow(YComp,2));
    return C;
}

void showResult(double L, double A){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";

    cout << "Length of the resultant vector = " << L << "\n";

    cout << "Direction of the resultant vector (deg) = " << A << "\n";

    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
#include<iostream>
#include<cmath>//For M_PI constant
using namespace std;

double calculateCylinderVolume(double radius, double height){
	//Calculate the volume of the cylinder
	double volume = M_PI * pow(radius, 2)*height;
	return volume;
}
int main(){
	double radius,height;
	
	// Prompt the user for input
	cout<<"Enter the raduis of the cylinder:";
	cin>>radius;
	
	cout<<"Enter the height of the cylinder:";
	cin>>height;
	
	//calculate and display the volume
	double volume = calculateCylinderVolume(radius,height);
	cout<<"The volume of the cylinder is:"<< volume << endl;
	
	return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	
	cout << "What are you looking for lil bro: ";
	getline(cin, a);
	
	if (a == "algorithm"){
		cout << "A step-by-step procedure or formula for solving a problem." << endl;
	}else if(a == "capacitance"){
		cout << "The ability of a system to store an electric charge." << endl;
	}else if(a == "circuit"){
		cout << "A closed path through which electric current can flow." << endl;
	}else if(a == "conduction"){
		cout << "The transfer of heat or electricity through a material." << endl;
	}else if(a == "current"){
		cout << "The flow of electric charge through a conductor." << endl;
	}else if(a == "decibel"){
		cout << "A unit used to measure the intensity of sound or the power level of an electrical signal." << endl;
	}else if(a == "dynamics"){
		cout << "The study of forces and motion in mechanical systems." << endl;
	}else if(a == "efficiency"){
		cout << "The ratio of the useful output of a system to the input." << endl;
	}else if(a == "entropy"){
		cout << "A measure of disorder or randomness in a system." << endl;
	}else if(a == "forces"){
		cout << "A push or pull acting on an object." << endl;
	}else if(a == "frequency"){
		cout << "The number of occurrences of a repeating event per unit of time." << endl;
	}else if(a == "heat transfer"){
		cout << "The movement of heat from a region of higher temperature to a region of lower temperature." << endl;
	}else if(a == "inductance"){
		cout << "The property of an electrical circuit that opposes changes in current." << endl;
	}else if(a == "kinematics"){
		cout << "The study of motion without considering forces." << endl;
	}else if(a == "load"){
		cout << "The weight or force supported by a structure or component." << endl;
	}else if(a == "magnetic field"){
		cout << "A field around a magnetic material within which the force of magnetism acts." << endl;
	}else if(a == "ohm's law"){
		cout << "A relationship between voltage, current, and resistance in an electrical circuit." << endl;
	}else if(a == "pressure"){
		cout << "The force exerted per unit area on a surface." << endl;
	}else if(a == "resistance"){
		cout << "The opposition to the flow of electric current in a circuit." << endl;
	}else if(a == "stress"){
		cout << "The internal force per unit area within materials." << endl;
	}else if(a == "torque"){
		cout << "A rotational force that causes an object to rotate about an axis." << endl;
	}else if(a == "voltage"){
		cout << "The potential difference between two points in an electric field." << endl;
	}else if(a == "work"){
		cout << "The energy transferred when a force is applied to an object over a distance." << endl;
	}else if(a == "wavelength"){
		cout << "The distance between consecutive crests or troughs of a wave." << endl;
	}else if(a == "yield strength"){
		cout << "The stress at which a material begins to deform plastically." << endl;
	}else if(a == "momentum"){
		cout << "The product of an object’s mass and velocity, representing the quantity of motion." << endl;
	}else if(a == "power"){
		cout << "The rate at which work is done or energy is transferred." << endl;
	}else if(a == "viscosity"){
		cout << "A measure of a fluid’s resistance to flow." << endl;
	}else if(a == "friction"){
		cout << "The force resisting the relative motion of solid surfaces or fluid layers." << endl;
	}else if(a == "elasticity"){
		cout << "The ability of a material to return to its original shape after deformation." << endl;
	}else{
		
	}

	return 0;
}

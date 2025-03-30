#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> engineering_terms;

    engineering_terms["algorithm"] = "A step-by-step procedure or formula for solving a problem.";
    engineering_terms["capacitance"] = "The ability of a system to store an electric charge.";
    engineering_terms["circuit"] = "A closed path through which electric current can flow.";
    engineering_terms["conduction"] = "The transfer of heat or electricity through a material.";
    engineering_terms["current"] = "The flow of electric charge through a conductor.";
    engineering_terms["decibel"] = "A unit used to measure the intensity of sound or the power level of an electrical signal.";
    engineering_terms["dynamics"] = "The study of forces and motion in mechanical systems.";
    engineering_terms["efficiency"] = "The ratio of the useful output of a system to the input.";
    engineering_terms["entropy"] = "A measure of disorder or randomness in a system.";
    engineering_terms["forces"] = "A push or pull acting on an object.";
    engineering_terms["frequency"] = "The number of occurrences of a repeating event per unit of time.";
    engineering_terms["heat transfer"] = "The movement of heat from a region of higher temperature to a region of lower temperature.";
    engineering_terms["inductance"] = "The property of an electrical circuit that opposes changes in current.";
    engineering_terms["kinematics"] = "The study of motion without considering forces.";
    engineering_terms["load"] = "The weight or force supported by a structure or component.";
    engineering_terms["magnetic field"] = "A field around a magnetic material within which the force of magnetism acts.";
    engineering_terms["ohm’s law"] = "A relationship between voltage, current, and resistance in an electrical circuit.";
    engineering_terms["pressure"] = "The force exerted per unit area on a surface.";
    engineering_terms["resistance"] = "The opposition to the flow of electric current in a circuit.";
    engineering_terms["stress"] = "The internal force per unit area within materials.";
    engineering_terms["torque"] = "A rotational force that causes an object to rotate about an axis.";
    engineering_terms["voltage"] = "The potential difference between two points in an electric field.";
    engineering_terms["work"] = "The zenergy transferred when a force is applied to an object over a distance.";
    engineering_terms["wavelength"] = "The distance between consecutive crests or troughs of a wave.";
    engineering_terms["yield strength"] = "The stress at which a material begins to deform plastically.";
    engineering_terms["momentum"] = "The product of an object’s mass and velocity, representing the quantity of motion.";
    engineering_terms["power"] = "The rate at which work is done or energy is transferred.";
    engineering_terms["viscosity"] = "A measure of a fluid’s resistance to flow.";
    engineering_terms["friction"] = "The force resisting the relative motion of solid surfaces or fluid layers.";
    engineering_terms["elasticity"] = "The ability of a material to return to its original shape after deformation.";

    string input;
    cout << "What are you looking for lil bro: ";
    getline(cin, input);

    if (engineering_terms.count(input) > 0) {
        cout << engineering_terms[input] << endl;
    } else {
        cout << "" << endl;
    }

    return 0;
}

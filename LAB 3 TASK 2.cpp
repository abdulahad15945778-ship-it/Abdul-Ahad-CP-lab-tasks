#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // deceleratio of variable
    //  Initialize all variables
    double initialVelocity = 0.0;
    double finalVelocity = 0.0;
    double acceleration = 0.0;
    double time = 0.0;

    cout << "---  Velocity Calculator (First Equation of Motion) ---\n" << endl;

    // user sa value la ga 
    cout << "Enter the Initial Velocity (m/s): ";
    cin >> initialVelocity;

    cout << "Enter the Acceleration (m/s^2): ";
    cin >> acceleration;

    cout << "Enter the Time elapsed (s): ";
    cin >> time;

    // velocity ka formula ha 
    finalVelocity = initialVelocity + (acceleration * time);

    // result shoe kara ga 
    cout << "\n--------  Summary ----------" << endl;
    
    cout << "Initial Velocity (u) : " << initialVelocity << " m/s" << endl;
    cout << "Acceleration     (a) : " << acceleration << " m/s^2" << endl;
    cout << "Time             (t) : " << time << " s" << endl;
    cout << "---------------------------" << endl;
    cout << "Final Velocity   (v) : " << finalVelocity << " m/s" << endl;

    return 0;
}

#include"Vehicle.h"

/// @file
/// @brief The Drive.cpp file.
///
/// This file contains the implementation of the drive and draw functions, which
/// respectively drive and draw the Vehicles objects passed as arguments. The file
/// includes the necessary header files and defines the functions.
///
/// @date 2023-03-25
/// @author Ry Kuper
///


///
/// @brief Drives a vehicle.
///
/// This function takes a reference to a Vehicles object and calls its drive()
/// function to drive the vehicle.
///
/// @param[in] car A reference to the Vehicles object to be driven.
///
/// @see Vehicles
///
/// @date 2023-03-25
/// @author Ry Kuper
///


void drive(Vehicles& car) {
    car.drive();
}

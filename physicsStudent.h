#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H

#include <iostream>
#include <string>
#include "student.h"

class physics_student: public student {
        public:
                enum class PhysicsConcentration{
                        BioPhysics,
                        Earth_and_Planetary_Sciences

                };

        private:
               	PhysicsConcentration concentration;

        public:
                physics_student():
                        student(),
                        concentration(PhysicsConcentration::BioPhysics){}


                void printStudentInformation()const{
                        std::cout << "Concentration" ;
                        switch (concentration) {
                                case PhysicsConcentration::BioPhysics:
                                        std::cout << "BioPhysics";
                                        break;
                                case PhysicsConcentration::Earth_and_Planetary_Sciences:
                                        std::cout << "Earth and Planetary Sciences";
                                        break;
                        }
                        std::cout << std::endl;
                }

		//setters and getters
		void setConcentration(PhysicsConcentration c){
			concentration = c;
		}
		PhysicsConcentration getConcentration()const{
			return concentration;
		}
			

};

#endif


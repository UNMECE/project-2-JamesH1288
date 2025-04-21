#include <iostream>
#include <vector>
#include <fstream>
#include "artStudent.h"
#include "student.h"
#include "physicsStudent.h"

int main(){
	std::vector<art_student*> art_students;
        
	//art student 1
	art_student* a1 = new art_student();
	a1->setFirstName("John");
        a1->setLastName("Doe");
        a1->setGPA(3.5);
        a1->setEmphasis(art_student::ArtEmphasis::ArtStudio);
        art_students.push_back(a1);
	
	//art student 2
	art_student* a2 = new art_student();
	a2->setFirstName("Jane");
	a2->setLastName("Doe");
	a2->setGPA(3.7);
	a2->setEmphasis(art_student::ArtEmphasis::ArtStudio);
	art_students.push_back(a2);

	//art student 3
	art_student* a3 = new art_student();
	a3->setFirstName("Emily");
	a3->setLastName("Doe");
	a3->setGPA(3.9);
	a3->setEmphasis(art_student::ArtEmphasis::ArtHistory);
	art_students.push_back(a3);

	//art student 4
	art_student* a4 = new art_student();
        a4->setFirstName("Ethan");
        a4->setLastName("Clark");
        a4->setGPA(3.2);
        a4->setEmphasis(art_student::ArtEmphasis::ArtHistory);
        art_students.push_back(a4);


	//art student 5
	art_student* a5 = new art_student();
        a5->setFirstName("Ryan");
        a5->setLastName("Smith");
        a5->setGPA(3.9);
        a5->setEmphasis(art_student::ArtEmphasis::ArtEducation);
        art_students.push_back(a5);
	
	//debugging and printing student info
	/*for(size_t i=0; i<art_students.size(); i++){
                std::cout << "Art Student " << i+1 << ": ";
                art_students[i]->printStudentInformation();
        }*/

	for(art_student* ptr : art_students){
		delete ptr; //for deleting allocated memory
	}

	
	/////////////////////////////////////////////////////////////


	std::vector<physics_student*> physics_students;

	//Physics student 1
	physics_student* p1 = new physics_student();
	p1->setFirstName("Noah");
	p1->setLastName("Smith");
	p1->setGPA(3.5);
	p1->setConcentration(physics_student::PhysicsConcentration::BioPhysics);
	physics_students.push_back(p1);

	//physics student 2
	physics_student* p2 = new physics_student();
        p2->setFirstName("Ellie");
        p2->setLastName("Miller");
        p2->setGPA(3.4);
        p2->setConcentration(physics_student::PhysicsConcentration::BioPhysics);
        physics_students.push_back(p2);	

	//physics student 3
	physics_student* p3 = new physics_student();
        p3->setFirstName("Cameron");
        p3->setLastName("Smith");
        p3->setGPA(3.8);
        p3->setConcentration(physics_student::PhysicsConcentration::Earth_and_Planetary_Sciences);
        physics_students.push_back(p3);
	
	//physics student 4
	physics_student* p4 = new physics_student();
        p4->setFirstName("Jackson");
        p4->setLastName("Clark");
        p4->setGPA(3.1);
        p4->setConcentration(physics_student::PhysicsConcentration::BioPhysics);
        physics_students.push_back(p4);

	//physics student 5
	physics_student* p5 = new physics_student();
        p5->setFirstName("John");
        p5->setLastName("Sanchez");
        p5->setGPA(3.9);
        p5->setConcentration(physics_student::PhysicsConcentration::BioPhysics);
        physics_students.push_back(p5);

	//debugging and printing student info
	/*for(size_t i=0; i<physics_students.size(); i++){
		std::cout << "Physics student " << i+1 << ": ";
		physics_students[i]->printStudentInformation();

	}*/
	/////////////////////////////////////////////////////////////////////////////////
	
	std::ofstream outfile("students.txt");
	
	//writing art student info to file
	outfile << " Art students \n";
	for (size_t i=0; i<art_students.size(); i++){
		outfile << "Art student: " << i + 1 << "\n";
		outfile << "First Name: " << art_students[i]->getFirstName() << "\n";
		outfile << "Last Name: " << art_students[i]->getLastName() << "\n";
		outfile << "GPA: " << art_students[i]->getGPA() << "\n";
		switch(art_students[i]->getEmphasis()){
			case art_student::ArtEmphasis::ArtHistory:
				outfile << "Emphasis: Art History\n"; break;
			case art_student::ArtEmphasis::ArtEducation:
                                outfile << "Emphasis: Art Education\n"; break;
			case art_student::ArtEmphasis::ArtStudio:
                                outfile << "Emphasis: Art Studio\n"; break;

		}
		outfile << "\n";

	}

	//writing physics student into to file
	outfile << " Physics students \n";
        for (size_t i=0; i<physics_students.size(); i++){
                outfile << "Physics student: " << i + 1 << "\n";
                outfile << "First Name: " << physics_students[i]->getFirstName() << "\n";
                outfile << "Last Name: " << physics_students[i]->getLastName() << "\n";
                outfile << "GPA: " << physics_students[i]->getGPA() << "\n";
                switch(physics_students[i]->getConcentration()){
                        case physics_student::PhysicsConcentration::BioPhysics:
                                outfile << "Concentration: BioPhysics\n"; break;
                        case physics_student::PhysicsConcentration::Earth_and_Planetary_Sciences:
                                outfile << "Concentration: Earth and Planetary Sciences\n"; break;

                }
                outfile << "\n";

        }
	outfile.close();

	//deleting memory allocation for both vectors
	for(physics_student* ptr : physics_students){
		delete ptr; //deleting memory allocation
	}

	for(art_student* ptr : art_students){
                delete ptr; //for deleting allocated memory
        }

	
	return 0;


}

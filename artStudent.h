#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H

#include <iostream>
#include <string>
#include "student.h"

class art_student: public student {
        public:
		enum class ArtEmphasis{
			ArtHistory,
			ArtEducation,
			ArtStudio

		};

        private:
                ArtEmphasis emphasis;

	public:
		art_student():
			student(),
			emphasis(ArtEmphasis::ArtHistory){}
	
		
		void printStudentInformation()const{
			std::cout << "Emphasis" ;
			switch (emphasis) {
				case ArtEmphasis::ArtHistory:
					std::cout << "Art History";
					break;
				case ArtEmphasis::ArtEducation:
					std::cout << "Art Education";
					break;
				case ArtEmphasis::ArtStudio:
					std::cout << "Art Studio";
					break;
			}
			std::cout << std::endl;
		}

		//setters and getters
		void setEmphasis(ArtEmphasis e){
			emphasis = e;
		}
		ArtEmphasis getEmphasis() const {
			return emphasis;
		}
					
};

#endif


#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class student {
	private:
	std::string 	first_name;
	std::string 	last_name;
	double		gpa;
	int 		grad_year;
	std::string 	grad_sem;
	int		end_year;
	std::string 	end_sem;
	std::string	grad_status;

	public:
		//constructor
		student():
		first_name(""), last_name(""), gpa(0.0), grad_year(0),
		grad_sem(""), end_year(0), end_sem(""), grad_status("Not Graduated"){}	

		//destructor
		~student(){

		}
		
		//setters and getters
		void setFirstName(const std::string& name){
			first_name = name;
		}
		void setLastName(const std::string& name){
			last_name = name;
		}
		void setGPA(double value) {
			gpa = value;
		}
		void setGradYear(int year){
			grad_year = year;
		}
		void setGradSemester(const std::string & sem){
			grad_sem = sem;
		}
		void setEndYear(int year){
			end_year = year;
		}
		void setEndSemester(const std::string& sem) {
			end_sem = sem;
		}
		void setGradStatus(const std::string& status){
			grad_status = status;
		}

		std::string getFirstName() const{
			return first_name;
		}
		std::string getLastName() const{
			return last_name;
		}
		double getGPA() const {
			return gpa;
		}
		int getGradYear() const{
			return grad_year;
		}
		std::string getGradSem() const{
			return grad_sem;
		}
		int getEndYear() const {
			return end_year;
		}
		std::string getEndSem() const {
			return end_sem;
		}
		std::string getGradStatus() const{
			return grad_status;
		}
	

};

#endif

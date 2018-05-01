#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <stack>

using std::cout;
using std::endl;

int main()
{
	std::vector<std::vector<float> > state;
	std::vector<std::pair<int, float> > vals;
	std::vector<float> vTemp;
	std::pair<int, float> dTemp;
	char num[10];
	int kval = 0;
	vTemp.assign(31,-1);
/////////////////////////////////////////////////////////////////////
	std::ifstream testFile("knn_test.csv");
	std::ifstream inputFile("knn_train.csv");
	
	if (inputFile){
		while(!inputFile.eof()){
			for (int i = 0; 31 > i; i++){
				inputFile.getline(num, 256,',');
				vTemp[i] = atof(num);
			}		
			state.push_back(vTemp);
		}
		cout << "X is "<<state.size()<<" lines."<<endl<<"Enter k value to start testing between test and train files."<<endl<<":";
		std::cin >> kval;
		
		if (testFile){
			while(!testFile.eof()){
				for (int i = 0; 31 > i; i++){
					testFile.getline(num, 256,',');
					vTemp[i] = atof(num);
				}		
				///start testing here
				//for knn algorithm
				dTemp.first =-1;
				dTemp.second = -2;

				for(int i =0; i <= state.size(); i++){
					vals.assign (kval, dTemp);
					
					if (vals.size() < kval){
						vals.push_back(dTemp);
					}
					else{
						for(int j = 0; j < vals.size();j++){
							
						}
					}
					cout <<" Ktested"<<endl;
				}
			}
		}
		else cout << "no test file " <<endl;
	}	
	else{
		cout << "Falure to open input file."<< endl;
	}
	
	inputFile.close();
	
	return 0;
}

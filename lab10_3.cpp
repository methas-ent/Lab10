#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    ifstream source;
    source.open("score.txt");
    int count = 0;
    double  number, Mean=0 , sum = 0;
    double Xi_2 = 0 ,std_dvt=0;

    string numberline;
    

    while(getline(source,numberline)){
        number = atof(numberline.c_str());
        sum += number;
        count++;
        Xi_2 += pow(number,2);
    }

    Mean = sum/count;
    
    
    std_dvt = pow((Xi_2/count)-pow(Mean,2),0.5);
    
    
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<Mean<<endl;
    cout << "Standard deviation = " << std_dvt;

    source.close();
}


//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
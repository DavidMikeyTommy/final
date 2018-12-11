///////
//
// David Thompson
///////

#include <cstring>
#include <iostream> 
#include <fstream>
using namespace std;


void countLine(char* pName)
{
	int count = 2


	cout<< "\nNumber of lines: " << count;


}

void countChar(char* pName)

{
	int count = 0;
	while(pName != '\n')
	{
		count++;
	}
	cout<< "\nNumber of charcters: " << count;

}







int main(int argc,char** argv)
{
	char* pass1 = "Ohio University";
	char* pass2 = "Athens";
	string fnamed;
	//check if user did not enter any argument
	if (argv[1] == NULL)
	{
		cout<<endl<< "No file name entered" << endl << endl;
		countLine(pass1);
		countChar(pass2);
		
	}

	else if(argv[1] == NULL)
	{
		string nameOfFile;
		ifstream in_stream;
		cin >> nameOfFile;

		in_stream.open(nameOfFile.c_str());

		if(in_stream.fail())        //if in_stream does not open file
  		{
   		 	cout << endl << nameOfFile << " failed to open!\n";
    			exit(1);
  		}	

		fstream filed;
		char* words
		while(filed >> words)
		{
			countLine(words);
			countChar(words);
		}
			
			

	}

	return 0;
}
/*



	//int main_ra [SIZE];      //the array
  	//int used = 0;            //will be the total number of elements entered

  	ifstream in_stream;
  
  	string instream_name;

 	 namefile (instream_name);          //function call
  	in_stream.open(instream_name.c_str());
  
  	if(in_stream.fail())        //if in_stream does not open file
  	{
   		 cout << endl << instream_name << " failed to open!\n";
    		exit(1);


*/









  	}	

  	getdata (in_stream, main_ra, used);  //call to funciton to get array data
	

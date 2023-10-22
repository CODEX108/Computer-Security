#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;

void enter()           
{
    fstream fout;
    fout.open("data.csv",ios::out|ios::app);
    int id,age;
    char name[20];
    double salary;

    cout << "Enter name : ";
    cin  >> name;
    cout << "Age : ";
    cin  >> age;
    cout << "ID : ";
    cin  >> id;
    cout << "Salary : ";
    cin  >> salary;


    fout << id << "," 
         << name << ","
         << age  << ","
         << salary << "\n";
        
    fout.close();
    cout << endl << "Data added";
}
void searchAndDisplay(int id)
{
    fstream fin;
    fin.open("data.csv",ios::in);
    char line[60];
	char word[6][10];
	int found=0;

    
    while (fin >> line)
	{
		
		int j=0;
		for (int i=0;line[i]!='\0';i++)  
		{
			int k=0;
			while (line[i]!=',' && line[i]!='\0') // break line into individual words
				word[j][k++]=line[i++];
			
			word[j][k++]='\0';
			j++;
		}
		
		j=0;
		int idCurrent=0;               // first word is the id but in char array form, 
		while (word[0][j]!='\0')       // so convert it into int for comparison
			idCurrent=(word[0][j++] - '0')+idCurrent*10;
		
		if (idCurrent==id)             // if id matches then print data
		{
			found=1;
			cout << "Name: " << word[1] << endl
				 << "Age : " << word[2] << endl
				 << "Id : "  << word[0] << endl
				 << "Salary :" << word[3];
			break;
		}
	}
	if (found==0)
		cout << "Record not found!" << endl;

    fin.close();

}
void updateRecord(int id)
{
	fstream datafile,tempfile;
	char line[60];
	char word[6];
	int found=0;
	datafile.open("data.csv",ios::in);
	tempfile.open("temp.csv",ios::out);
	
	while (datafile >> line)
	{
		int j=0;
		for (int i=0;line[i]!=',';i++)   // retrieve id
			word[j++]=line[i];
			
		word[j++]='\0';
		
		
		j=0;
		int idCurrent=0;
		while (word[j]!='\0')            // convert id which is in char array form 								 
			idCurrent=(word[j++] - '0')+idCurrent*10;  // to int number for comparision..
		
		
		if (idCurrent!=id)                    // if id doesn't match then store entire line in a temp file
			tempfile << line << "\n";
		else                                // when id matches then store updated data in temp file
		{
			int id,age;
			char name[20];
			double salary;
	
			found=1;
			
			cout << endl << "Enter name : ";
			cin  >> name;
			cout << "Age : ";
			cin  >> age;
			cout << "ID : ";
			cin  >> id;
			cout << "Salary : ";
			cin  >> salary; 
			
			tempfile << id << "," 
				     << name << ","
				     << age  << ","
				     << salary << "\n";
		}
		
	}
	if (found==0)
		cout << endl << "Record not found";
	else
		cout << endl << "Updated Successfully";
	
	datafile.close();
	tempfile.close();

	remove("data.csv");
	rename("temp.csv","data.csv");
}
void removeRecord(int id)
{
	fstream datafile,tempfile;
	char line[60];
	char word[6];
	int found=0;
	datafile.open("data.csv",ios::in);
	tempfile.open("temp.csv",ios::out);
	
	while (datafile >> line)
	{
		int j=0;
		for (int i=0;line[i]!=',';i++)   
			word[j++]=line[i];
		
		word[j++]='\0';
		
		
		j=0;
		int idCurrent=0;
		while (word[j]!='\0')  
			idCurrent=(word[j++] - '0')+idCurrent*10;
		
		
		if (idCurrent!=id)
			tempfile << line << "\n";
		else
			found=1;
		
	}
	if (found==0)
		cout << endl << "Record not found";
	else
		cout << endl << "Record deleted";
	
	
	datafile.close();
	tempfile.close();

	remove("data.csv");
	rename("temp.csv","data.csv");
}
void showAll()
{
	fstream fin;
    fin.open("data.csv",ios::in);
    char line[60];
	char word[6][10];

    cout << endl << setw(6) << "ID"
		 << setw(15) << "Name"
		 << setw(5) << "Age"
		 << setw(10) << "Salary" << endl;
    while (fin >> line)
	{
		int j=0;
		for (int i=0;line[i]!='\0';i++)   
		{
			int k=0;
			while (line[i]!=',' && line[i]!='\0')
				word[j][k++]=line[i++];
			
			word[j][k++]='\0';
			j++;
		}

		cout << endl << setw(6) << word[0]
		 << setw(15) << word[1]
		 << setw(5) << word[2]
		 << setw(10) << word[3];

	}
}
int main()
{
	int ch,id;

	cout <<  "CSV Employee file management" << endl;

	do 
	{
		cout << endl << "\n1. Show all records"
		     << endl << "2. Search for a record"
			 << endl << "3. Enter a new record"
			 << endl << "4. Update existing record"
			 << endl << "5. Delete a record"
			 << endl << "6. Delete file"
			 << endl << "7. Exit Program"
			 << endl << "Enter choice : ";

		cin  >> ch;
		cout << endl;

		switch (ch)
		{
			case 1: showAll();
			break;

			case 2: 
			cout << "Enter ID : ";
			cin  >> id;
			searchAndDisplay(id);
			break;

			case 3: enter();
			break;

			case 4:
			cout << "Enter ID : ";
			cin  >> id;
			updateRecord(id);
			break;

			case 5:
			cout << "Enter ID : ";
			cin  >> id;
			removeRecord(id);
			break;

			case 6:
			remove("data.csv");
			cout << endl << "File deleted";
			break;

			case 7:
			cout << "Exiting..";
			break;

			default:
			cout << "Wrong Choice !!";

		}
	} while (ch!=7);
    return 0;
}

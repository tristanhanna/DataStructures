#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#include <iostream>

using namespace std;

int insertIntoSortedArray(int myArray[], int numEntries, int newValue)
{
  int newNumEntries=numEntries+1;
  int newArray[newNumEntries];
  int i = 0;
    if(myArray[i]<newValue)
    {
        for(i=numEntries; i>=0 && (myArray[i]>newValue); i--)
        {
            newArray[i+1]=myArray[i];
        }
        newArray[i]=newValue;
    }
    else
    {
        for(int x = 0; x<numEntries; x++)
        {
            newArray[x+1]=myArray[x];
        }
        newArray[i]=newValue;
    }
  for(int k=i; k<newNumEntries; k++)
  {
    myArray[k]=newArray[k];
  }
  return newNumEntries;
}

int main(){
  int banana[200];
  for(int t=0; t<200; t++)
  {
    banana[t]=0;
  }
  int entries = 0;
  string filename;
  cout << "What is the name of your file?"<< endl;
  getline(cin, filename);
  ifstream ifile(filename);
  if(ifile.is_open())
  {
    string line;
    while(getline(ifile, line)){
      int number=stoi(line);
      int plusOne=insertIntoSortedArray(banana, entries, number);
      entries=plusOne;
      for(int i=0; i<entries; i++)
      {
        cout << banana[i];
        if(i<(entries-1))
        {
          cout << ",";
        }
        else{
          cout<<endl;
        }
      }
      line = "";
    }
  }
  else
  {
    cout << "Cannot open file."<< endl;
  }
  for(int v=0; v<entries; v++)
  {
    cout << banana[v] << endl;
  }
}

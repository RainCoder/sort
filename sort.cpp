#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>

using namespace std;

/**
\fn SortAnalysis 
\brief Sort data 
\param [in] The "array" A[0..n-1] containing items to be sorted 
\returns The total number of key comparisons made
*/
int SortAnalysis(auto& A )
{
  int count = 0u;
  
  for (int i = 1u; i < A.size(); i++)
   {
      int v = A[i];
      int j = i - 1;

      while (j >= 0)
        {
					  count = count + 1;
			if(A[j] > v )
			{
		
				  A[j + 1] = A[j];
				  j = j -1;
			  }
			  else
			  break;
        } 
     
     A[j + 1] = v;
 
   }
  
  return count;
}


int main()
{
  vector<int> inputs;
  int input;

   cerr<<"Welcome to \"SortAnalysis\". We first need some input data."<<endl;
   cerr<<"To end input type Ctrl+D (followed by Enter)"<<endl<<endl;

   
 
    while(cin>>input)//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
    }

   cerr<<endl<<"|  Number of inputs | Number of comparisons |"<<endl;
   cerr<<"|\t"<<inputs.size();
   cout<<"| "<<SortAnalysis(inputs);
    
   cerr<<"\t|"<<endl<<endl<<"Program finished."<<endl<<endl;

    return 0;
}

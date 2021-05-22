//Program
#include <iostream>
#include <unordered_map>				//Technically this tutorial is teaching how to do an unordered map but thats the same thing as a hash table 
using namespace std;

int main()
{
	std::unordered_map<int, char> umap = { {1, 'a'},{2,'b'} };
	//access
	cout << umap[1] << endl;		//this is a
	cout << umap[2] << endl;		//this is b

	//Update
	umap[1] = 'c';			//Now key 1 should hold C

	//Iterate
	for(auto& elm: umap) {
		std::cout << elm.first << " " << elm.second << " ";			//'first' is the number and 'second' is the value
	}					//1, 2				//C, B					//An example would be 1, C or 2, B
	cout << endl;													//Since its unordered the value will not be be printed in order

	//Find
	auto result = umap.find(2);
	if (result != umap.end()) {				//Contains a spatial value
		std::cout << "Found " << result->first << " " << result->second << '\n';
	}
	else {
		std::cout << "Not Found\n";
	}
}

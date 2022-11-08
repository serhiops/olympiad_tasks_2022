#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int boxes, cases, cartridges_in_cases, guns, cartridges_in_store;
    cin >> boxes >> cases >> cartridges_in_cases >> guns >> cartridges_in_store;

	int total_cartridges = boxes * cases * cartridges_in_cases;       //calculate the total number of cartridges

	int full_stores = total_cartridges / (guns * cartridges_in_store);   //number of full stores for each unit

	int remainder_stores = (total_cartridges - full_stores * guns * cartridges_in_store) / cartridges_in_store;
	//number of full unallocated stores

    int remainder_cartridges = total_cartridges - full_stores * guns * cartridges_in_store - remainder_stores * cartridges_in_store;
    //the rest of the cartridges

	cout << full_stores << ' ' <<remainder_stores<< ' ' << remainder_cartridges << endl;
	return 0;
}
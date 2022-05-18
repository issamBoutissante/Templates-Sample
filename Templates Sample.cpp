#include <iostream>
#include<vector>
using namespace std;

template<typename T>
T getMin(T a, T b) {
	return a < b ? a : b;
}

template<typename TypeVector,typename TypeReteur>
TypeReteur getMoyenne(vector<TypeVector> notes) {
	TypeVector somme = 0;
	for (int i = 0; i < notes.size(); i++)
		somme += notes[i];
	return (TypeReteur)somme / notes.size();
}

template<typename T>
T getAleatoire(){
	srand(time(0));
	return (T)rand()/1.5;
}

int main()
{
	//Test getMin()
	//cout<<getMin<int>(3, 4)<<endl;

	//Test getMoyenne()
	//vector<int> notes;
	//notes.push_back(15);
	//notes.push_back(16);
	//notes.push_back(18);
	//cout << "La moyenne est : " << getMoyenne<int, double>(notes) << endl;

	//Test getAleatoire()
	//cout << "Random : " << getAleatoire<int>() << endl;
	return 200;
}


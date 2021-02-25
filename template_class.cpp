#include <iostream>
using namespace std;
/*
template <typename T>
T artir(T x){
	return x+1;
}
template<typename T> // <class T> ayný sey
void yerdegistir(T&x,T&y){
	T temp = x;
	x = y;
	y= temp;
	
}

template <class T>

class A{
	public:
		T data;
		A(T data): data(data){
			
		}
};
*/

template <class T>
class V{
	public:
		T* data;
		int index;
		public:
			V()  : index(0){
				data = new T[100];
			}
			
			void ekle(T t){
				data[index++] = t;
			}
			bool isEmpty()const{
				return index == 0;
			}
			void print()const{
				for(int i =0;i<index;i++){
					cout << data[i]<< " ";
					if(!isEmpty()){
						cout <<"bossa alt satira gec"<< endl;
					}
				}
			}	
			V<T> operator+(const V<T>& v){
				V<T> temp;
				for(int i=0;i<index;i++){
					temp.ekle(data[i]+v.data[i]);
					return temp;
				}
			}
};

int main(){
	V<int> v1,v2;
	
	v1.ekle(3);
	v1.ekle(5);
	v1.print();
	
	
	v2.ekle(9);
	v2.ekle(12);
	v2.print();
	cout << endl;
	(v1+v2).print();
	return 0;
}

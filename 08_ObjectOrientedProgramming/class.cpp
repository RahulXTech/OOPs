#include<iosteam>
using namespace std;

// The C++ Standard Library vector class is a class template for sequence containers. A vector stores elements of a given type 
// in a linear arrangement, and allows fast random access to any element. A vector is the preferred container for a sequence 
// when random-access performance is at a premium.

int main(){
 
class tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout<<"Tea constructor called "<<teaName<<endl;
        }

        virtual void brew() cont{
            cout<<"Bewing"<<teaName<<"with generic method"<<endl;
        }
        virtual void serve() cont{
            cout<<"Serving"<<servings<<"with generic method"<<endl;
        }

        virtual ~tea(){
            cout<<"tea destructor called for "<< teaName<<endl;
        }

};
    return 0;
}
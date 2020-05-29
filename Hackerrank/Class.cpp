#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private: 
      int age,std;
      string first,last;
    
    public:
      void set_age(int a){
        age=a;
      }

      int get_age(){
        return age; 
      }

      void set_first_name(string firstname){
          first=firstname;
      }

      string get_first_name(){
          return first;
      }

      void set_last_name(string lastname){
          last=lastname;
      }

      string get_last_name(){
        return last;
      } 

      void set_standard(int s){
          std=s;
      }

      int get_standard(){
          return std;
      }

      string to_string(){
        stringstream s;
        s << age << "," << first << "," << last << "," << std;
        return s.str();  
      }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


/*=------------------------------=
          Dry Assignment:
=-------------------------------=*/

//   Part A:

template <class T>
std::vector<T> slice(std::vector<T> vec, int start, int step, int stop) {
     int size = vec.size();
     if(stop > size || stop < 0 || start < 0 ||start >= size ||step <= 0){
          throw BadInput();
     }

     std::vector<T> new_vec;
     for(int count = start; count < stop; count += step){
          new_vec.push_back(vec[count]); 
     }

     return new_vec;
}


//   Part B:

class A {

public :
     std::vector<std::shared_ptr<int>> values;
     A() = default; 
     ~A() = default;
     void add(int x){  
          values.push_back(std::shared_ptr<int>(new int(x)));
     }
};
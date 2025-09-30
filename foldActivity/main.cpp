//
//  main.cpp
//  foldActivity
//
//  Created by Gabriela Avila on 9/29/25.
//

#include <iostream>
#include <vector>
using namespace std;

int add(int a, int b){
    return  a + b;
}

int fold(vector<int>& vec, function <int(int, int)> func)
{
//   static int result;
//    static int i;
//    if (i < vec.size()){
//        int r1 = vec[i];
//        int r2 = vec[i+1];
//        vec = {};
//        for (int& in : vec)
//        {
//            vec.push_back(vec[i + in]);
//        }
//        return result = func(r1,r2) + fold(vec, func);
//    }else
//    {
//        return result;
//    }
//    
//    int result = vec[0]
//    for int i = 0; i< vec
    
    if (vec.empty())
    {
        return 0;
    }
    int result = vec[0];
    for (auto i = 1; i < vec.size(); i++)
    {
        result = func(result, vec[i]);
    }
    return result;
    
}

int main() {
   
    vector <int> vec = {4, 3, 2, 1};
    function <int(int, int)> func;
    func = add;
    int hi = fold(vec, func);
    cout << hi;
}

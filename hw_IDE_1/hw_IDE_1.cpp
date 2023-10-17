
#include <iostream>
#include <fstream>


int main()
{
    std::ifstream in ("in.txt");
    std::ofstream out("out.txt");
    
    int size_n, size_m;
    
    in >> size_n;   //take size_n fron in.txt
    int* arr_n = new int[size_n];

    for (int i =0; i < size_n; i++)
    {
        in >> arr_n[i];
    } 
    //take array N from in.txt

    in >> size_m;   //take size_m from in.txt  
    out << size_m;
    out << '\n';    //write size_m in out.txt
    
    int* arr_m = new int[size_m];

    for (int i = 0; i < size_m; i++)
    {
        in >> arr_m[i];
    } 
    //take array M from in.txt

    int* arr_m_final = new int[size_m];
    for (int i = 0; i < (size_m - 1); i++) 
    {
        arr_m_final[i + 1] = arr_m[i];
    }
    arr_m_final[0] = arr_m[size_m - 1];     //change array M

    for (int i = 0; i < size_m; i++) {
        out << arr_m_final[i] << " ";
    } 
    out << '\n';    //write array M_final in out.txt
    
    out << size_n;
    out << '\n';    //write size_n in out.txt

    int* arr_n_final = new int[size_n];
    for (int i = 0; i < (size_n - 1); i++) {
        arr_n_final[i] = arr_n[i + 1];
    }
    arr_n_final[size_n - 1] = arr_n[0];     //change array N_final

    for (int i = 0; i < size_n; i++) {
        out << arr_n_final[i] << " ";
    }  
    out << std::endl;   //write array N_final in out.txt
    
    in.close();
    out.close();

}
 

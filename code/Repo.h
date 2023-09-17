//
// Created by mihh on 7/12/23.
//

#pragma once
#include "string"
#include "vector"

#include "fstream"


template<class T>
class Repo{
    std::string nameOfFile;
    std::vector< T > data;
    void load(){
        std::ifstream fin(nameOfFile.c_str());//
        std::string line;
        while(std::getline(fin, line))
            data.push_back(T(line));
    }
    void unLoad(){
        std::ofstream fout(nameOfFile.c_str());
        for (auto &elem:data)
            fout << elem.str()<<"\n";
    }
public:
    Repo(std::string nameOfFile_) : nameOfFile(nameOfFile_){
        load();
    }
    std::vector<T> & getAll(){
        return data;
    }
    ~Repo(){
        unLoad();
    }
};

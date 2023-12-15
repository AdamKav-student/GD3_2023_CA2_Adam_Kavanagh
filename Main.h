/*
#pragma once
#include <iostream>

void fileToString(string fname, string data)
{
     
    //load file
    ifstream fin(fname);

    //check if file is open
    if (fin)
    {
        //read file into string
        string line;
        //while there is a line to read
        while (getline(fin, line))
        {
            //add line to data
            data += line + "\n";
        }
        fin.close();
    }
    //if file is not open
    else
    {
        cout << "Error opening file" << endl;
    }
}
*/

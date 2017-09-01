//
//  main.cpp
//  AmazonAssessment
//
//  Created by Elangbam, Johnson (J.) on 8/29/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "PatternMatching.hpp"
//#include <algorithm>


using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    vector <vector<string> > patternVector;
    vector<string> str;
    vector<string> pattern;
    
    str = {"kiwi","apple","kiwi","orange"};
    
    //pattern = {"mango","anything","apple"};
    
    patternVector = {
        {"mango","apple","orange"},
        {"kiwi","anything","kiwi"},
        {"orange","papaya"},
        {"blue","red"},
        {"brown","pink"}};
    
    
    int isFound = match2DVectorPattern(patternVector, str);
    
    if (isFound) {
        cout<<"Bingo!!\n";
    }else
        cout<<"Good luck next time\n";
    
    
    return 0;
}




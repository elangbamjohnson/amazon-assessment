//
//  PatternMatching.cpp
//  AmazonAssessment
//
//  Created by Elangbam, Johnson (J.) on 9/1/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "AmazonAssessment.hpp"


int match2DVectorPattern(vector<vector<string>> patternVector, vector<string> cartVector){
    
    
    int i;
    int j = 0;
    int isFound = 0;
    int maxCompare;
    
    string cartString;
    string patternString;
    
    for (int k = 0 ; k < patternVector.size(); k++) {
        if (isFound == 1) {
            break;
        }
        
        maxCompare = int(cartVector.size() - patternVector[k].size());
        i = 0;
        cartString = cartVector[i];
        patternString = patternVector[k][j];
        
        if (cartVector.size() < patternVector[k].size()) {
            continue;
        }
        
        while (i <= maxCompare) {
            
            while (cartString == patternString || patternString == "anything") {
                isFound = 1;
                i++;
                j++;
                cartString = cartVector[i];
                patternString = patternVector[k][j];
                
                if (cartString != patternString && patternString != "anything") {
                    isFound = 0;
                }
                
                if (i  == cartVector.size()-1 || j == patternVector[k].size()-1)
                    break;
                
            }
            
            if (j == (int)patternVector[k].size() - 1){
                break;
            }
            isFound = 0;
            i++;
            cartString = cartVector[i];
            
        }
        
    }
    
    return isFound;
    
}

int matchPattern(vector<string> str, vector<string> pattern) {

    int position = 0;
    int i = 0;
    int j = 0;
    int isFound = 0;
    int counter = int(str.size() - pattern.size());


    string s = str[i];
    string p = pattern[j];

    if (str.size() < pattern.size()) {
        return 0;
    }


    while (i <= counter) {

        while (s == p || p == "anything") {
            isFound = 1;
            i++;
            j++;
            s = str[i];
            p = pattern[j];
            if (s == "" || p == "")
                break;

        }

        if (p == ""){
            break;
        }
        isFound = 0;
        i++;
        s = str[i];
        position++;

    }

    return isFound;


}



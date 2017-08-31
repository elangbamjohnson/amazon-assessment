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
//#include <algorithm>


using namespace std;

int match(vector<string> str, vector<string> pattern);
int match(vector<vector<string>> patternVector, vector<string> cartVector);


int main(int argc, const char * argv[]) {
    // insert code here...
    vector <vector<string> > patternVector;
    vector<string> str;
    vector<string> pattern;
    
    str = {"kiwi","pink","kiwi"};
    
    //pattern = {"mango","anything","apple"};
    
    patternVector = {
        {"mango","apple","orange"},
        {"kiwi","anything","kiwi"},
        {"orange","papaya"},
        {"blue","red"},
        {"brown","pink"}};
    
    
    int isFound = match(patternVector, str);
    
    if (isFound) {
        cout<<"Pattern found\n";
    }else
        cout<<"Pattern not found\n";
    
    return 0;
}

int match(vector<vector<string>> patternVector, vector<string> cartVector){
    
    
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


//int match(vector<string> str, vector<string> pattern) {
//    
//    int position = 0;
//    int i = 0;
//    int j = 0;
//    int isFound = 0;
//    int counter = int(str.size() - pattern.size());
//    
//    
//    string s = str[i];
//    string p = pattern[j];
//    
//    if (str.size() < pattern.size()) {
//        return 0;
//    }
//    
//
//    while (i <= counter) {
//        
//        while (s == p || p == "anything") {
//            isFound = 1;
//            i++;
//            j++;
//            s = str[i];
//            p = pattern[j];
//            if (s == "" || p == "")
//                break;
//            
//        }
//        
//        if (p == ""){
//            break;
//        }
//        isFound = 0;
//        i++;
//        s = str[i];
//        position++;
//        
//    }
//    
//    return isFound;
//    
//    
//}
//

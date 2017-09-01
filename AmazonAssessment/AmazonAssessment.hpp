//
//  PatternMatching.hpp
//  AmazonAssessment
//
//  Created by Elangbam, Johnson (J.) on 9/1/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef AmazonAssessment_hpp
#define AmazonAssessment_hpp

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

int matchPattern(vector<std::string> str, vector<string> pattern);
int match2DVectorPattern(std::vector<vector<string>> patternVector, vector<string> cartVector);



#endif /* PatternMatching_hpp */

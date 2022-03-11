// @file      test_data.hpp
// @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2020 Ignacio Vizzo, all rights reserved
#ifndef TEST_DATA_HPP_
#define TEST_DATA_HPP_
#include <opencv2/core/mat.hpp>
#include <vector>

//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80
std::vector<cv::Mat>& GetDummyData();
cv::Mat GetAllFeatures();

//  dummy clustered data
//  00, 00, 00, 00, 00, 00, 00, 00, 00, 00;
//  20, 20, 20, 20, 20, 20, 20, 20, 20, 20;
//  40, 40, 40, 40, 40, 40, 40, 40, 40, 40;
//  60, 60, 60, 60, 60, 60, 60, 60, 60, 60;
//  80, 80, 80, 80, 80, 80, 80, 80, 80, 80
cv::Mat Get5Kmeans();

//  05,  05,  05,  05,  05,  05,  05,  05,  05,  05;
//  15,  15,  15,  15,  15,  15,  15,  15,  15,  15;
// 115, 115, 115, 115, 115, 115, 115, 115, 115, 115;
cv::Mat Get3Features();

#endif  // TEST_DATA_HPP_

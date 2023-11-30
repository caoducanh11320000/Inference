#include "trt_inference.hpp"

using namespace IMXAIEngine;

TRT_Inference::TRT_Inference(){
printf("Khai bao doi tuong thanh cong\n");
}

trt_error TRT_Inference::init_inference(int argc, char **argv){

return TRT_RESULT_SUCCESS;
}

trt_error TRT_Inference::trt_detection(std::vector<cv::Mat> &input_img, std::vector<trt_results> &results){
    std::cout <<"Hello" << std::endl;
return TRT_RESULT_SUCCESS;   
}

trt_error TRT_Inference::test(){
    std::cout <<"Hello" << std::endl;
return TRT_RESULT_SUCCESS;  
}

#ifndef TRT_INFERENCE_HPP
#define TRT_INFERENCE_HPP

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <vector>
#include <iostream>
//
#include "NvInfer.h"
#include "cuda_runtime_api.h"
#include "logging.h"
#include <fstream>
#include <map>
#include <chrono>

namespace IMXAIEngine
{

    typedef enum{
        TRT_RESULT_SUCCESS,
        TRT_RESULT_ERROR
    } trt_error;


    typedef struct
    {
            
    } trt_results;
    

    class TRT_Inference
    {
    private:
        trt_error trt_release(void){
            printf("Doi tuong da dc huy\n");
        }
        
    public:
        TRT_Inference();
        ~TRT_Inference(){
            this->trt_release();
        }
        trt_error init_inference(int argc, char **argv);
        trt_error trt_detection(std::vector<cv::Mat> &input_img, std::vector<trt_results> &results);
        trt_error test();
    };

} // namespace IMXAIEngine

#endif
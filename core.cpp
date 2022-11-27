    // Include HLS Math Lib to use calculate exponential function
    #include "hls_math.h"

    // This is the top function defined during project initialization
    int hand_num_nn (float X[6]){

        // Weights of the trained Network
        float weights[6] = {22243.43148569 ,2779.52672807 ,-1601.21956264, -2080.22856057, -157.5181807 ,  -40.62507384};
        float bias = 39671.21108800848;
        float ans = 0;

        // Feed Forward Network Implementation
        for (int i = 0;i < 6;i++) {
            ans += X[i] * weights[i];
        }
        ans += bias;

        return ans/23000;
    }

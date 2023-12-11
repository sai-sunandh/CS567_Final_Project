#include <deepstate/DeepState.hpp>


#include "calculator.cpp"  // Include the calculator code
#include <cmath>

using namespace std;
using namespace deepstate;


// Test fixture for the calculator functions
TEST(Calculator, BasicOperations) 
{
    int MAX_OPERANDS;
    int choice = DeepState_IntInRange(1, 12);  // Choose a random operation
    if(choice!=8 || choice!=9|| choice!=10)
    {
        MAX_OPERANDS=2;
    }
    else
    {
        MAX_OPERANDS=1;
    }
    double nums[MAX_OPERANDS];

    // Generate random operands
    for (int i = 0; i < MAX_OPERANDS; ++i) 
    {
        nums[i] = DeepState_DoubleInRange(0,8956);  // Generate random float
    }

    

    double result = calculator(choice, nums);

    // Check that the result is not NaN (Not a Number)
    ASSERT_FALSE(isnan(result)) << "Result is NaN";

    // Check that the result is not infinity
    ASSERT_FALSE(isinf(result)) << "Result is infinity";

    // Check that the result is finite
    ASSERT_TRUE(isfinite(result)) << "Result is not finite";
}

/*int main(int argc, char** argv) {
    DeepState_InitOptions(argc, argv);

    // Run the DeepState test
    DeepState_Run();
    
    return 0;
}*/

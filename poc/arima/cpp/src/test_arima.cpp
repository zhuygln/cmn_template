#include <gtest/gtest.h>
#include <armadillo>
#include "arima.hpp"  // Use the header file

// Example test case using Google Test
TEST(ARIMATest, BasicFunctionality) {
    // Sample data
    arma::vec data = {112, 118, 132, 129, 121, 135, 148, 148, 136, 119, 104, 118,
                      115, 126, 141, 135, 125, 149, 170, 170, 158, 133, 114, 140};

    // ARIMA model with p=2, d=1, q=2
    ARIMA model(2, 1, 2);
    model.fit(data);

    // Forecast the next 5 periods
    arma::vec predictions = model.forecast(5);

    // Check if the predictions vector has the expected length
    EXPECT_EQ(predictions.n_elem, 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

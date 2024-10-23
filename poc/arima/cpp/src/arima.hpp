
#ifndef ARIMA_HPP
#define ARIMA_HPP

#include <armadillo>
#include <vector>

// Function declarations (no definitions here)
arma::vec difference(const arma::vec& data, int lag);
double mse(const arma::vec& actual, const arma::vec& predicted);

// ARIMA model class declaration
class ARIMA {
public:
    // Constructor
    ARIMA(int p, int d, int q);

    // Public methods
    void fit(const arma::vec& input_data);
    arma::vec forecast(int steps);

private:
    // Member variables for ARIMA parameters
    int p;  // AR order
    int d;  // Differencing order
    int q;  // MA order

    // Model coefficients and residuals
    arma::vec ar_coefficients;
    arma::vec ma_coefficients;
    std::vector<double> residuals;

    // Private methods for model fitting and forecasting
    void fitAR(const arma::vec& diff_data);
    void fitMA(const arma::vec& diff_data);
    double predictAR(const arma::vec& diff_data);
    double predictMA();
    arma::vec reverseDifference(const arma::vec& diff_pred, const arma::vec& original_tail);
};

#endif // ARIMA_HPP

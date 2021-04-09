#include "happydads.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(happydads, error)
{
    double expected = 1.0;
    double error = expected /10;
    uint32_t runs = 5000;

    uint32_t total = 0;

    for (uint32_t i = 0; i < runs; ++i)
    {
        total += attempt();
    }
    double actualrelation = (static_cast <double>(runs)/ (total-runs));
    EXPECT_NEAR(actualrelation, expected, error);
}
#include "happydads.cpp"

//#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(happydads, error)
{
    uint32_t expected = 1;
    uint32_t error = expected / 100;
    uint32_t runs = 5000;

    uint32_t total = 0;

    for (uint32_t i = 0; i < runs; ++i)
    {
        total += attempt();
    }
    uint32_t actualrelation = (runs/ (total-runs));
    EXPECT_NEAR(actualrelation, expected, error);
}
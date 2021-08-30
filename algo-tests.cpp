//
// Created by kobi on 8/29/21.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "fmt/format.h"

TEST(algo_tests, basic) {
    constexpr auto total = 8;
    const auto list1 = std::to_array({1, 2, 3, 4});
    const auto list2 = std::to_array({0, 0, - 1, 4});

    std::set<int> answers;
    for (const auto v : list1) {
        answers.insert(total - v);
    }
    bool found{};
    for (const auto v : list2) {
        if (answers.contains(v)) {
            found = true;
        }
    }
    ASSERT_TRUE(found);
}

TEST(algo_tests, algo) {
    constexpr auto total = 8;
    const auto list1 = std::to_array({1, 2, 3, 4});
    const auto list2 = std::to_array({0, 0, - 1, 4});

    std::set<int> answers;
    const auto f([total](const auto v){ return total - v; });
    static_cast<void>(std::transform(list1.cbegin(), list1.cend(),
                   std::inserter(answers, std::begin(answers)),
                   f));
    fmt::print("number of elements {}\n", answers.size());
    ASSERT_FALSE(answers.empty());
    fmt::print("\n");
    const auto cont([&answers](const auto v){ return answers.contains(v); });
    const auto found = (std::end(list2) != std::find_if(list2.begin(), list2.end(), cont));
    ASSERT_TRUE(found);
}

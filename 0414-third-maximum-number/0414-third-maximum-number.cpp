class Solution final {
public:
    constexpr int thirdMax(std::span<const int> nums) const noexcept {
        std::optional<int> first{}, second{}, third{};

        for(int num: nums){
            if(num == first || num == second || num == third) continue;

            if(!first.has_value() || num > *first){
                third = second;
                second = first;
                first = num;
            } else if(!second.has_value() || num > *second){
                third = second;
                second = num;
            } else if(!third.has_value() || num > *third){
                third = num;
            }
        }

        return third.value_or(*first);
    }
};
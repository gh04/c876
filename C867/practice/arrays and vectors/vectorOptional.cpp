#include <vector>
#include <optional>

vector<optional<int>> bonuses(5);

// One employee gets a bonus of 0
bonuses[0] = 0;

// Another gets $100
bonuses[1] = 100;

// Others are not eligible — remain empty (nullopt)
if (bonuses[i].has_value()) {
    cout << "Bonus: " << bonuses[i].value() << endl;
} else {
    cout << "No bonus applicable." << endl;
}

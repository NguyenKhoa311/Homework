void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    int total_cost = round(meal_cost + tip + tax);
    
    cout << total_cost;
}

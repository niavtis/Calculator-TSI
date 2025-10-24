#include <iostream>
#include <cmath>
#include <iomanip>

#define _USE_MATH_DEFINES

using namespace std;

int main() {
    double alpha;  // Alpha mainigais radiānos
    cout << "Ievadiet alpha vērtību (radiānos): ";
    cin >> alpha;
    cout << endl << "Alpha = " << alpha << " radiāni" << endl;
    
    // z1 aprēķins: z1 = cos²(3π/8 - α/4) - cos²(11π/8 + α/4)
    cout << "\n=== Z1 APRĒĶINS ===" << endl;
    cout << "Formula: z1 = cos²(3π/8 - α/4) - cos²(11π/8 + α/4)" << endl;
    
    // Pirmā argumenta aprēķins
    double arg1 = (3.0 * M_PI / 8.0) - (alpha / 4.0);
    cout << "\n1. Aprēķinām pirmo argumentu:" << endl;
    cout << "   arg1 = 3π/8 - α/4" << endl;
    cout << "   arg1 = " << (3.0 * M_PI / 8.0) << " - " << (alpha / 4.0) << endl;
    cout << "   arg1 = " << arg1 << " radiāni" << endl;
    
    // Otrā argumenta aprēķins
    double arg2 = (11.0 * M_PI / 8.0) + (alpha / 4.0);
    cout << "\n2. Aprēķinām otro argumentu:" << endl;
    cout << "   arg2 = 11π/8 + α/4" << endl;
    cout << "   arg2 = " << (11.0 * M_PI / 8.0) << " + " << (alpha / 4.0) << endl;
    cout << "   arg2 = " << arg2 << " radiāni" << endl;
    
    // Kosinusu aprēķins
    double cos_arg1 = cos(arg1);
    double cos_arg2 = cos(arg2);
    cout << "\n3. Aprēķinām kosinusus:" << endl;
    cout << "   cos(arg1) = cos(" << arg1 << ") = " << cos_arg1 << endl;
    cout << "   cos(arg2) = cos(" << arg2 << ") = " << cos_arg2 << endl;
    
    // Kvadrātu aprēķins
    double cos2_arg1 = cos_arg1 * cos_arg1;
    double cos2_arg2 = cos_arg2 * cos_arg2;
    cout << "\n4. Aprēķinām kvadrātus:" << endl;
    cout << "   cos²(arg1) = " << cos_arg1 << "² = " << cos2_arg1 << endl;
    cout << "   cos²(arg2) = " << cos_arg2 << "² = " << cos2_arg2 << endl;
    
    // Galīgais z1 rezultāts
    double z1 = cos2_arg1 - cos2_arg2;
    cout << "\n5. Aprēķinām z1:" << endl;
    cout << "   z1 = cos²(arg1) - cos²(arg2)" << endl;
    cout << "   z1 = " << cos2_arg1 << " - " << cos2_arg2 << endl;
    cout << "   z1 = " << z1 << endl;
    
    // z2 aprēķins: z2 = (√2 / 2) * sin(α/2)
    cout << "\n=== Z2 APRĒĶINS ===" << endl;
    cout << "Formula: z2 = (√2 / 2) * sin(α/2)" << endl;
    
    // α/2 aprēķins
    double alpha_half = alpha / 2.0;
    cout << "\n1. Aprēķinām α/2:" << endl;
    cout << "   α/2 = " << alpha << " / 2 = " << alpha_half << " radiāni" << endl;
    
    // sin(α/2) aprēķins
    double sin_alpha_half = sin(alpha_half);
    cout << "\n2. Aprēķinām sin(α/2):" << endl;
    cout << "   sin(α/2) = sin(" << alpha_half << ") = " << sin_alpha_half << endl;
    
    // √2/2 aprēķins
    double sqrt2_div_2 = sqrt(2.0) / 2.0;
    cout << "\n3. Aprēķinām √2/2:" << endl;
    cout << "   √2/2 = " << sqrt(2.0) << " / 2 = " << sqrt2_div_2 << endl;
    
    // Galīgais z2 rezultāts
    double z2 = sqrt2_div_2 * sin_alpha_half;
    cout << "\n4. Aprēķinām z2:" << endl;
    cout << "   z2 = (√2/2) * sin(α/2)" << endl;
    cout << "   z2 = " << sqrt2_div_2 << " * " << sin_alpha_half << endl;
    cout << "   z2 = " << z2 << endl;
    
    // Salīdzinājums
    cout << "\n=== GALĪGIE REZULTĀTI ===" << endl;
    cout << fixed << setprecision(10);
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    
    double difference = abs(z1 - z2);
    cout << "\nAtšķirība |z1 - z2| = " << difference << endl;
    
    if (difference < 0.000001) {
        cout << "Rezultāti sakrīt!" << endl;
    } else {
        cout << "Rezultāti atšķiras." << endl;
    }
    
    return 0;
}

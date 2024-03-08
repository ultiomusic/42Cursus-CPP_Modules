#include "ScavTrap.hpp"

int main() {
    ScavTrap st("FAKO");

    st.attack("SONMEZ");
    st.beRepaired(200);
    st.guardGate();
    return (0);
}
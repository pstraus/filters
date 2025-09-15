#include <CartesianOneDimensionalWithSpeed.h>

using namespace filters;

CartesianOneDimensionalWithSpeed::CartesianOneDimensionalWithSpeed(const Eigen::Vector<double, 2> &state);

// Particle extrapolates itself forward in time by dt
// dt in seconds
void CartesianOneDimensionalWithSpeed::extrapolate(double dt)
{
    // Speed is second element of vector.  Speed is unchanged.
    m_state[0] = m_state[0] + m_state[1] * dt;
}

const Eigen::Vector<double, 2> &CartesianOneDimensionalWithSpeed::getState() const;
{
    return m_state;
}

void CartesianOneDimensionalWithSpeed::setState(const Eigen::Vector<double, 2> &new_state)
{
    m_state = new_state;
}

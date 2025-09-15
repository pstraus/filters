#pragma once;

#include <Eigen/Core>

namespace filters
{
    template <int N>
    class I_Particle
    {
    public:
        virtual ~I_Particle() = default;

        // Particle extrapolates itself forward in time by dt
        // dt in seconds
        void extrapolate(double dt);

        const Eigen::Vector<double, N> &getState() const = 0;

        void setState(const Eigen::Vector<double, N> &newState) = 0;
    };
}

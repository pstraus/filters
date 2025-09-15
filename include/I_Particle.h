#pragma once

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
        virtual void extrapolate(double dt) = 0;

        virtual const Eigen::Vector<double, N> &getState() const = 0;

        virtual void setState(const Eigen::Vector<double, N> &newState) = 0;
    };
}

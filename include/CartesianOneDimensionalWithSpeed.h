#pragma once

#include <I_Particle.h>

namespace filters
{
    class CartesianOneDimensionalWithSpeed : public I_Particle<2>
    {
    public:
        CartesianOneDimensionalWithSpeed() = default;

        CartesianOneDimensionalWithSpeed(const Eigen::Vector<double, 2> &state);

        ~CartesianOneDimensionalWithSpeed() override = default;

        // Particle extrapolates itself forward in time by dt
        // dt in seconds
        void extrapolate(double dt) override;

        const Eigen::Vector<double, 2> &getState() const override;

        void setState(const Eigen::Vector<double, 2> &new_state) override;

    private:
        Eigen::Vector<double, 2> m_state;
    };
}
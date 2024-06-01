#include "uuid.h"

#include "xoroshiro128.h"

namespace LambdaSnail
{
    //std::unique_ptr<xoroshiro128pp> default_generator = std::make_unique<xoroshiro128pp>();

    // template<typename uuid_variant>
    // uuid<uuid_variant> const nil_uuid = uuid({ 0 });
    //
    // template<typename uuid_variant>
    // uuid<uuid_variant> const uuid<uuid_variant>::max_uuid = uuid({ 0xFF });

    template<typename uuid_variant>
    uuid<uuid_variant>::uuid(std::array<uint8_t, 16> const &bytes)
    {
        octets = bytes;
        set_fixed_fields(*this);
    }
};